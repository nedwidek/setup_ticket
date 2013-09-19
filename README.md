setup_ticket
============

Dummy PHP module to provide simulate a function that takes 25 seconds to run.

Build
=====

phpize
./configure --enable-setup-ticket
make
echo 'extension=setup_ticket' > /etc/php.d/setup_ticket.ini

Use in Scripts
==============
setup_ticket();
