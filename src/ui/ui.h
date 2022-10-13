// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Slider1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Slider1;
extern lv_obj_t * ui_Screen1_Label2;
extern lv_obj_t * ui_Screen1_Image4;


LV_IMG_DECLARE(ui_img_productbakery_png);    // assets\productbakery.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
