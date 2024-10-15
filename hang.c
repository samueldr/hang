/* SPDX-License-Identifier: GPL-3.0-only */
#include <limits.h>
#include <unistd.h>

int main() {
	for (;;) {
		sleep(INT_MAX);
	}
}
