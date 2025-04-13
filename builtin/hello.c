#include "builtin.h"
#include "config.h"
#include "gettext.h"

static const char * const hello_usage[] = {
	N_("git hello [<name>]"),
	NULL
};

int cmd_hello(int argc, const char **argv, const char *prefix, struct repository *repo)
{
	const char *name = "Git World";
	
	if (argc > 1)
		name = argv[1];
	
	printf(_("Hello, %s!\n"), name);
	
	return 0;
}
