#!/bin/sh

service nginx start
service mysql start
#mysql -e "create database wp_db;"
#mysql -e "create user 'wpuser'@'localhost' indentified by 'P@ssw0rd';"
#mysql -e "grant all on wp_db.* to 'wpuser'@'localhost';"
#mysql -e "FLUSH PRIVILEGES;"
service php7.3-fpm start
tail -f /dev/null

