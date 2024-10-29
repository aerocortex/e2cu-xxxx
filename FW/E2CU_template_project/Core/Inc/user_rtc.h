/*
 * user_rtc.h
 *
 *  Created on: 15. lip 2019.
 *      Author: Zver
 */

#ifndef USER_RTC_H_
#define USER_RTC_H_

#include "rtc.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum UserRtcTimeFormatEnum
{
	USERT_RTC_TIME_FORMAT__US,
	USERT_RTC_TIME_FORMAT__EU,
}UserRtcTimeFormatType;

typedef enum UserRtcDateFormatEnum
{
	USERT_RTC_DATE_FORMAT__US,
	USERT_RTC_DATE_FORMAT__EU,
}UserRtcDateFormatType;

typedef struct UserRtc_TimeStruct
{
	uint32_t Day;
	uint32_t Month;
	uint32_t Year;
	uint32_t AmPm;
	uint32_t FormatAmPm;
	uint32_t Hours;
	uint32_t Minutes;
	uint32_t Seconds;
}UserRtc_TimeType;

HAL_StatusTypeDef User_RTC_SetSlaveTimeAndDate(RTC_TimeTypeDef * time, RTC_DateTypeDef * date);
HAL_StatusTypeDef User_RTC_GetTimeAndDate(RTC_TimeTypeDef *time, RTC_DateTypeDef * date);
HAL_StatusTypeDef User_RTC_SetTimeAndDate(RTC_TimeTypeDef *time, RTC_DateTypeDef * date);

HAL_StatusTypeDef User_RTC_GetFullTime(UserRtc_TimeType * time, uint32_t format);
HAL_StatusTypeDef User_RTC_GetTimeString(char str1[], uint32_t maxLength);
uint32_t User_RTC_ParseShortTimeString(char str1[], uint32_t maxLength, UserRtc_TimeType * time, UserRtcTimeFormatType format);
uint32_t User_RTC_ParseShortDateString(char str1[], uint32_t maxLength, UserRtc_TimeType * time, UserRtcDateFormatType format);
int32_t User_RTC_DaysBetweenDates(RTC_DateTypeDef * dateNew, RTC_DateTypeDef * dateOld);

#ifdef __cplusplus
}
#endif

#endif /* USER_RTC_H_ */
