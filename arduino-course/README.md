# Arduino Learning Journey - Paul McWhorter's "New Arduino Tutorials"

This repo tracks my progress learning Arduino from the YouTube playlist:
[https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP](https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP) by Paul McWhorter (68 videos).

## Repo Structure

```
arduino-course/
├── README.md                 <- you are here
├── PROGRESS_TRACKER.md        <- checklist of every topic, updated as you learn
├── docs/
│   └── setup.md               <- Arduino IDE / hardware setup notes
└── lessons/
    ├── 01-fundamentals/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 01-.../ ... 19-.../   <- one folder per lesson (1-19)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
    ├── 02-colors-and-sound/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 20-.../ ... 26-.../   <- one folder per lesson (20-26)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
    ├── 03-switches-and-motors/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 27-.../ ... 40-.../   <- one folder per lesson (27-40)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
    ├── 04-shift-registers-and-displays/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 41-.../ ... 52-.../   <- one folder per lesson (41-52)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
    ├── 05-sensors-and-plotting/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 53-.../ ... 63-.../   <- one folder per lesson (53-63)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
    ├── 06-ir-remote-projects/
    │   ├── README.md          <- module overview + lesson index
    │   ├── 64-.../ ... 68-.../   <- one folder per lesson (64-68)
    │   │     ├── README.md     <- lesson notes, goal, components, what I learned
    │   │     ├── notes.md      <- freeform notes/debugging log
    │   │     └── sketch/
    │   │           └── sketch.ino   <- Arduino code for that lesson
```

## Modules

| Module | Topics | Lessons |
|--------|--------|---------|
| [01-fundamentals](lessons/01-fundamentals) | Fundamentals: Getting Started, LEDs, Variables & Loops | 1-19 |
| [02-colors-and-sound](lessons/02-colors-and-sound) | RGB LEDs & Buzzers | 20-26 |
| [03-switches-and-motors](lessons/03-switches-and-motors) | Pushbuttons, Servos, Joysticks & DC Motors | 27-40 |
| [04-shift-registers-and-displays](lessons/04-shift-registers-and-displays) | Hex Numbers, Shift Registers & LCD Displays | 41-52 |
| [05-sensors-and-plotting](lessons/05-sensors-and-plotting) | Ultrasonic Sensors, Serial Plotter & Dimensional Analysis | 53-63 |
| [06-ir-remote-projects](lessons/06-ir-remote-projects) | Infrared Remote Control Projects | 64-68 |

## How I use this repo

1. Watch a lesson from the playlist.
2. Build the circuit and write the code inside that lesson's `sketch/sketch.ino`.
3. Fill in that lesson's `README.md` (goal, components, what I learned).
4. Tick off the row in [`PROGRESS_TRACKER.md`](./PROGRESS_TRACKER.md).
5. Commit and push:

```bash
git add .
git commit -m "Complete Tutorial N: <topic>"
git push
```

## Hardware Used

- Arduino Uno R3 (or compatible)
- Elegoo/generic starter kit (breadboard, LEDs, resistors, sensors, servos, etc.)

## License

Code in this repo is my own practice work following the tutorials; the tutorials themselves belong to Paul McWhorter / toptechboy.com.
