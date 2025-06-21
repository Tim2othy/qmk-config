The layout for my split dvorak keyboard. (Work in progress.)

# Basics

## Layout

We have
- [`test.txt`](test.txt) where one can test what your layout can do
- [`Tim2othy/keymap.c`](Tim2othy/keymap.c) The main file you want to edit
- [`default/keymap.c`](default/keymap.c) The default keymap

## How to update the layout

Edit  [`Tim2othy/keymap.c`](Tim2othy/keymap.c). Then copy it over to the correct folder on your local machine and replace the previous version.

Then using the terminal, QMK MSYS, compile the file and flash it at the same time by entering `qmk flash`, and pressing the activating button on the keyboard.

# Debugging

- If it seems like everything should be working but nothing happens after flashing the keyboard:
    - Checheck if `#define MASTER_RIGHT` is missing or commented out from `config.h` if yes add that line back in.


# Problems and Updates

## 28/02/2025

- Works quite well

- Main confusion is `ctrl` and `shift`
    - I have `shift` above `ctrl` as I am used to, but now I have `shift` on the same hight as `a`, prevously it was one below and `ctrl` was 2 below.
    - So, sometimes when I want to press `shift` I accidentally press `ctrl`.

- The second thing is space and backspace
    - I sometimes get them confused

- Copy and paste are intuitive

## 08/04/2025

Added numberpad to left side arrow layer. But messed up with some of the numbers. Lol, will fix later




# Knowledge


The thing's I really know.

- Space should be located where my right thumb can reach it
- And Shift should stay in the bottom left corner.
