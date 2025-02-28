# How to update the layout

Edit the `c` in this repository. Then copy it over to the folder and replace the previous version.

Then using the terminal QMK MSYS, compile the file and flash it at the same time by entering `qmk flash`, and pressing the activating button on the keyboard.

# Debugging

- If everything is seemingly working but nothing happens after flashing the keyboard:
    - Checheck if `#define MASTER_RIGHT` is missing or commented out from `config.h` if yes add that line back in.


# Problems and Updates

## After latest update

- Works quite well

- Main confusion is the `ctrl` with and `shift`
    - I have `shift` above `ctrl` as I am used to, but now I have `shift` on the same hight as a normally it was one below and cont is 2 below. So all the time I want to press `shift` and i accidentally press `ctrl`.

- The second thing is space and backspace
    - I sometimes get them confused

- Copy and paste are intuitive
