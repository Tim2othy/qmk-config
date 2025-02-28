# Basics

## Layout

We have

- `test.txt` where one can test what your layout can do
- `Tim2othy\keymap.c` The main file you want to edit
- `default\keymap.c` The default keymap
- `link-actual-c-file.lnk` the link to the folder where the `c` file that you compile has to go.

## How to update the layout

Edit `Tim2othy\keymap.c`. Then copy it over to this `link-actual-c-file.lnk` folder and replace the previous version.

Then using the terminal QMK MSYS, compile the file and flash it at the same time by entering `qmk flash`, and pressing the activating button on the keyboard.

# Debugging

- If everything is seemingly working but nothing happens after flashing the keyboard:
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
