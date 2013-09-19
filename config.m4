PHP_ARG_ENABLE(setup_ticket, whether to enable setup_ticket() support,
[ --enable-setup-ticket   Enable setup_ticket() support])

if test "$PHP_SETUP_TICKET" = "yes"; then
  AC_DEFINE(HAVE_SETUP_TICKET, 1, [Whether you have setup_ticket()])
  PHP_NEW_EXTENSION(setup_ticket, setup_ticket.c, $ext_shared)
fi
