/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/RoomInfoBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

RoomInfoBase::RoomInfoBase()
{
    setWidth(390);
    setHeight(146);

    swipeBG.setXY(-45, 0);
    swipeBG.setBitmap(Bitmap(BITMAP_SELECTEDTEMPBG_ID));

    imageAirHumidty.setXY(11, 42);
    imageAirHumidty.setBitmap(Bitmap(BITMAP_INFO_AIR_HUMIDITY_ID));

    textAreaAirHum.setXY(11, 12);
    textAreaAirHum.setColor(touchgfx::Color::getColorFrom24BitRGB(77, 108, 139));
    textAreaAirHum.setLinespacing(0);
    textAreaAirHum.setTypedText(TypedText(T_HOMEUIINFO));

    containerLarge.setPosition(130, 7, 123, 134);

    textAreaBottomlineLarge.setPosition(27, 120, 73, 14);
    textAreaBottomlineLarge.setColor(touchgfx::Color::getColorFrom24BitRGB(52, 75, 103));
    textAreaBottomlineLarge.setLinespacing(0);
    textAreaBottomlineLarge.setTypedText(TypedText(T_HOMEUIWHEELHEATINGUPCENTER));
    containerLarge.add(textAreaBottomlineLarge);

    textAreaDevicesLarge.setPosition(29, 55, 69, 70);
    textAreaDevicesLarge.setColor(touchgfx::Color::getColorFrom24BitRGB(52, 75, 101));
    textAreaDevicesLarge.setLinespacing(0);
    Unicode::snprintf(textAreaDevicesLargeBuffer, TEXTAREADEVICESLARGE_SIZE, "%s", TypedText(T_SINGLEUSEID80).getText());
    textAreaDevicesLarge.setWildcard(textAreaDevicesLargeBuffer);
    textAreaDevicesLarge.setTypedText(TypedText(T_SINGLEUSEID79));
    containerLarge.add(textAreaDevicesLarge);

    textAreaRoomLarge.setPosition(3, 2, 120, 19);
    textAreaRoomLarge.setColor(touchgfx::Color::getColorFrom24BitRGB(52, 75, 101));
    textAreaRoomLarge.setLinespacing(0);
    textAreaRoomLarge.setTypedText(TypedText(T_SINGLEUSEID82));
    containerLarge.add(textAreaRoomLarge);

    imageSliderLarge.setXY(2, 35);
    imageSliderLarge.setBitmap(Bitmap(BITMAP_MAIN_SLIDER_TEMP_ID));
    containerLarge.add(imageSliderLarge);

    textAreaDegreeLarge.setXY(57, 48);
    textAreaDegreeLarge.setColor(touchgfx::Color::getColorFrom24BitRGB(46, 64, 86));
    textAreaDegreeLarge.setLinespacing(0);
    textAreaDegreeLarge.setTypedText(TypedText(T_SINGLEUSEID81));
    containerLarge.add(textAreaDegreeLarge);

    imageSchedule.setXY(298, 39);
    imageSchedule.setBitmap(Bitmap(BITMAP_SCHEDULE_ICON_ID));

    textAreaTemperature.setPosition(48, 46, 44, 27);
    textAreaTemperature.setColor(touchgfx::Color::getColorFrom24BitRGB(61, 82, 106));
    textAreaTemperature.setLinespacing(0);
    Unicode::snprintf(textAreaTemperatureBuffer, TEXTAREATEMPERATURE_SIZE, "%s", TypedText(T_SINGLEUSEID84).getText());
    textAreaTemperature.setWildcard(textAreaTemperatureBuffer);
    textAreaTemperature.setTypedText(TypedText(T_SINGLEUSEID83));

    textAreaHumidty.setPosition(48, 90, 44, 27);
    textAreaHumidty.setColor(touchgfx::Color::getColorFrom24BitRGB(61, 82, 106));
    textAreaHumidty.setLinespacing(0);
    Unicode::snprintf(textAreaHumidtyBuffer, TEXTAREAHUMIDTY_SIZE, "%s", TypedText(T_SINGLEUSEID86).getText());
    textAreaHumidty.setWildcard(textAreaHumidtyBuffer);
    textAreaHumidty.setTypedText(TypedText(T_SINGLEUSEID85));

    textAreaSchedule.setXY(285, 10);
    textAreaSchedule.setColor(touchgfx::Color::getColorFrom24BitRGB(77, 108, 139));
    textAreaSchedule.setLinespacing(0);
    textAreaSchedule.setTypedText(TypedText(T_SINGLEUSEID87));

    textAreaScheduleDays.setXY(284, 95);
    textAreaScheduleDays.setColor(touchgfx::Color::getColorFrom24BitRGB(46, 65, 87));
    textAreaScheduleDays.setLinespacing(0);
    textAreaScheduleDays.setTypedText(TypedText(T_SINGLEUSEID88));

    textAreaScheduleTime.setXY(267, 111);
    textAreaScheduleTime.setColor(touchgfx::Color::getColorFrom24BitRGB(46, 65, 87));
    textAreaScheduleTime.setLinespacing(0);
    textAreaScheduleTime.setTypedText(TypedText(T_SINGLEUSEID89));

    add(swipeBG);
    add(imageAirHumidty);
    add(textAreaAirHum);
    add(containerLarge);
    add(imageSchedule);
    add(textAreaTemperature);
    add(textAreaHumidty);
    add(textAreaSchedule);
    add(textAreaScheduleDays);
    add(textAreaScheduleTime);
}

void RoomInfoBase::initialize()
{
	
}