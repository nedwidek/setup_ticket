#ifndef PHP_SETUP_TICKET
#define PHP_SETUP_TICKET 1

PHP_FUNCTION(setup_ticket);

extern zend_module_entry hello_module_entry;
#define phpext_setup_ticket_ptr & hello_module_entry

#endif
