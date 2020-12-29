
#ifndef LCD_H
#define LCD_H

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */
 
#include "stm32f4xx.h"
 
 typedef struct
 {
   void     (*Init)(void);
   uint16_t (*ReadID)(void);
   void     (*DisplayOn)(void);
   void     (*DisplayOff)(void);
   void     (*SetCursor)(uint16_t, uint16_t);
   void     (*WritePixel)(uint16_t, uint16_t, uint16_t);
   uint16_t (*ReadPixel)(uint16_t, uint16_t);

    /* Optimized operation */
   void     (*SetDisplayWindow)(uint16_t, uint16_t, uint16_t, uint16_t);
   void     (*DrawHLine)(uint16_t, uint16_t, uint16_t, uint16_t);
   void     (*DrawVLine)(uint16_t, uint16_t, uint16_t, uint16_t);

   uint16_t (*GetLcdPixelWidth)(void);
   uint16_t (*GetLcdPixelHeight)(void);
   void     (*DrawBitmap)(uint16_t, uint16_t, uint8_t*);
   void     (*DrawRGBImage)(uint16_t, uint16_t, uint16_t, uint16_t, uint8_t*);
 }LCD_DrvTypeDef;

/* Link function for LCD peripheral */
void LCD_IO_InitDriver(LCD_DrvTypeDef **pInst);
void LCD_IO_Init(void);
void LCD_IO_WriteData(uint16_t RegValue);
void LCD_IO_WriteReg(uint8_t Reg);
uint32_t LCD_IO_ReadData(uint16_t RegValue, uint8_t ReadSize);
void LCD_Delay(uint32_t delay);	

#ifdef __cplusplus
}
#endif /* __cplusplus */
 
#endif /* LCD_H */
