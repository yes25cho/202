#include <iostream>
#include <mysql/mysql.h>
#include <stdio.h>

#define DB_HOST "localhost"
#define DB_USER "root"
#define DB_PASS "mirim"
#define DB_NAME "mysql"

using namespace std;


int main(int argc, char** argv)
{
	MYSQL* mysql = NULL;

	if (mysql_library_init(argc, argv, NULL)) {
		fprintf(stderr, "could not initialize MySQL client library\n");
		exit(1);
	}

	mysql = mysql_init(mysql);

	if (!mysql) {
		puts("Init faild, out of memory?");
		return EXIT_FAILURE;
	}

	mysql_options(mysql, MYSQL_READ_DEFAULT_FILE, (void*)"./my.cnf");

	if (!mysql_real_connect(mysql,       /* MYSQL structure to use */
		"localhost",  /* server hostname or IP address */
		"root",  /* mysql user */
		"1234",   /* password */
		"sakila",    /* default database to use, NULL for none */
		0,           /* port number, 0 for default */
		NULL,        /* socket file or named pipe name */
		CLIENT_FOUND_ROWS /* connection flags */)) {
		puts("Connect failed\n");
	}
	else {
		if (mysql_query(mysql, "SELECT * FROM saram")) {
			printf("Query failed: %s\n", mysql_error(mysql));
		}
		else {
			MYSQL_RES* result = mysql_store_result(mysql);

			if (!result) {
				printf("Couldn't get results set: %s\n", mysql_error(mysql));
			}
			else {
				MYSQL_ROW row;
				int i;
				unsigned int num_fields = mysql_num_fields(result);

				while ((row = mysql_fetch_row(result))) {
					for (i = 0; i < num_fields; i++) {
						printf("%s, ", row[i]);
					}
					putchar('\n');
				}

				mysql_free_result(result);
			}
		}
	}

	mysql_close(mysql);

	mysql_library_end();

	return EXIT_SUCCESS;
}