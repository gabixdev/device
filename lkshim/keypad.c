#include <string.h>
#include <debug.h>
#include <dev/keys.h>
#include <dev/ssbi.h>
#include <dev/gpio_keypad.h>
#include <dev/pm8921.h>
#include <platform/gpio.h>
#include <sys/types.h>
#include <board.h>
#include <smem.h>

#define BITS_IN_ELEMENT(x) (sizeof(x) * 8)
#define KEYMAP_INDEX(row, col) (row)* BITS_IN_ELEMENT(unsigned int) + (col)

unsigned int apq8064_pm8917_keys_gpiomap[] = {
	[KEYMAP_INDEX(0, 0)] = PM_GPIO(35),	/* Volume key on the device/CDP */
	[KEYMAP_INDEX(0, 1)] = PM_GPIO(37),	/* Volume key on the device/CDP */
};
