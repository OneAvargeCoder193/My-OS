#include "util.h"
#include "isr.h"
#include "fpu.h"
#include "idt.h"
#include "irq.h"
#include "screen.h"
#include "timer.h"
#include "font.h"
#include "system.h"
#include "keyboard.h"
#include "music.h"
#include "sound.h"
#include "math.h"
#include "filesystem.h"

#define FPS 60

#define NUM_KEYS 26

void _main(u32 magic) {
    idt_init();
    isr_init();
    fpu_init();
    irq_init();
    screen_init();
    timer_init();
    keyboard_init();

    sound_init();

    u32 last_frame = 0, last = 0;

    struct dir *user;
    user->name = "User";

    while (true) {
        screen_clear(COLOR(0, 0, 0));
        const u32 now = (u32) timer_get();

        if (now != last) {
            last = now;
        }

        

        screen_swap();
    }
}
