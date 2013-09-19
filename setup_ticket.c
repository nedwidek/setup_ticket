#ifdef HAVE_CONFIG_H
#include "config.h"
#endif


#include "php.h"
#include "setup_ticket.h"
#include "unistd.h"

static function_entry setup_ticket_functions[] = {
    PHP_FE(setup_ticket, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry setup_ticket_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
   "setup_ticket",
    setup_ticket_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    "1.0",
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_SETUP_TICKET
ZEND_GET_MODULE(setup_ticket)
#endif


PHP_FUNCTION(setup_ticket) {
    sleep(25);
}
