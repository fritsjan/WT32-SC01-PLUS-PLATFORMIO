# WT32-SC01-PLUS-PLATFORMIO

Having the updated ESP32 SC01 display, named WT32-SC01-PLUS which features a parallel driven display and a esp32-s3, I could not find any working examples for it.
I could find some older SC01 examples for platform.io which worked with the TFT_eSPI grafics library.
After struggeling to get it working with this parallel display, I found out that some of the display pins on the WT32-SC01-PLUS had a number higher than 31.
Unfortunately the TFT_eSPI library uses a trick which makes it impossible to use pins numbered above 31...

Fortunately LovyanGFX library does not have this restriction.
