# WT32-SC01-PLUS-PLATFORMIO

Having the updated ESP32 SC01 display, named WT32-SC01-PLUS which features a parallel driven display and a esp32-s3, I could not find any working examples for it.
I could find some older SC01 examples for platform.io which worked with the TFT_eSPI grafics library.
After struggeling to get it working with this parallel display, I found out that some of the display pins on the WT32-SC01-PLUS had a number higher than 31.
Unfortunately the TFT_eSPI library uses a trick which makes it impossible to use pins numbered above 31...

Fortunately LovyanGFX library does not have this restriction.

## This template is made for easy use in platform.io 

First of all the WT32-SC01-PLUS is using a custom ESP32-S3 module made by WIRELESS-TAG.
It has 8Mb FLASH and 2Mb PSRAM. In platform.io the closest esp32-s3 for this is the um_tinys3 board.
So I used this here, see platform.ini for details

Note that after uploading the firmware, the device is NOT automatically restarted, you have to do this manually (BUG in ESP32 library)
## This template works together with the squareline editor from lvgl, this is the workflow used

When working with the [squareline editor](https://squareline.io/) from lvgl, set the project in squareline to:
- Arduino, with TFT_eSPI (which we cannot use, but will replace with LovyanGFX in this main.cpp file)
- 480 x 320, 16 bit display

Export the template project AND export the UI Files
You will get a project directory with two directories inside, 'ui' and 'libraries'

From the libraries directory, copy the lv_conf.h to this projects /src/ directory (overwrite the old one)

From the ui directory, copy all files to this projects src/ui/ directory (you can empty the ui directory first if needed)
The ui.ino file can/should be deleted because this main.cpp files takes over.

Then just build and upload (and manually reset), and the UI should be visible on the screen