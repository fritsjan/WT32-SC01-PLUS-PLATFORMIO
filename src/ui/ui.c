// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Slider1(lv_event_t * e);
lv_obj_t * ui_Screen1_Slider1;
lv_obj_t * ui_Screen1_Label2;
lv_obj_t * ui_Screen1_Image4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_Slider1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_Screen1_Label2, target, "", "%");
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, -6);
    lv_obj_set_y(ui_Screen1_Label1, -35);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "This is a test");

    ui_Screen1_Slider1 = lv_slider_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Slider1, 150);
    lv_obj_set_height(ui_Screen1_Slider1, 10);
    lv_obj_set_align(ui_Screen1_Slider1, LV_ALIGN_CENTER);

    ui_Screen1_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label2, 380);
    lv_obj_set_y(ui_Screen1_Label2, 0);
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Screen1_Label2, "0");

    ui_Screen1_Image4 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Screen1_Image4, &ui_img_productbakery_png);
    lv_obj_set_width(ui_Screen1_Image4, LV_SIZE_CONTENT);   /// 201
    lv_obj_set_height(ui_Screen1_Image4, LV_SIZE_CONTENT);    /// 56
    lv_obj_set_x(ui_Screen1_Image4, -1);
    lv_obj_set_y(ui_Screen1_Image4, 103);
    lv_obj_set_align(ui_Screen1_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Screen1_Slider1, ui_event_Screen1_Slider1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
