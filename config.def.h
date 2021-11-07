/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
  { run_command,  "^C1^ %s",   "/opt/slstatus/internet"},
  { run_command,  "^C7^ ",   ""},
  { run_command,  "^C2^ %s",   "/opt/slstatus/memory"},
  { run_command,  "^C7^ ",   ""},
  { run_command,  "^C7^ %s",   "/opt/slstatus/battery"},
  { run_command,  "^C7^ ",   ""},
  { run_command,  "^C3^ %s",   "/opt/slstatus/volume"},
  { run_command,  "^C7^ ",   ""},
  { run_command,  "^C4^ %s ",   "/opt/slstatus/clock"},
};
