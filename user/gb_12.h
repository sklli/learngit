#ifndef  _GB_12_H_
#define  _GB_12_H_
#include	"includes.h"


#define  GB_ZHI1           1
#define  GB_NENG1          2
#define  GB_LIANG1         3
#define  GB_KU1            4
#define  GB_GUAN1          5
#define  GB_LI1            6

#define  GB_YUN1            7
#define  GB_PING1          8
#define  GB_TAI1            9
#define  GB_LIAN            10
#define  GB_JIE           11
#define  GB_DENG          12
#define  GB_DAI            13
#define  GB_ZHENG           14
#define  GB_CHANG           15

#define  GB_JIAO           16
#define  GB_XUE            17
#define  GB_BAN            18
#define  GB_YAN            19
#define  GB_SHI            20
#define ASC_NUM_1          21
#define ASC_NUM_2          22
#define ASC_NUM_3          23
#define ASC_NUM_4          24
#define GB_LUO             25
#define GB_CAN             26
#define GB_SHU_1           27
#define GB_TONG            28
#define GB_XUN             29
#define GB_JU              30
#define GB_XIAN_1          31
#define GB_BEN             32
#define GB_DI              33
#define GB_KONG            34
#define GB_ZHI             35
#define GB_SHE             36
#define GB_BEI             37
#define GB_YUN             38
#define GB_XING            39
#define GB_ZHU             40
#define GB_ZHAN            41
#define GB_ZHI_1           42
#define ASC_MORE           43
#define ASC_SPA            44
#define GB_JI_1            45
#define GB_DIAN            46
#define GB_QI              47
#define GB_FENG            48
#define GB_MING            49
#define GB_WEN             50
#define GB_SHI_1           51
#define GB_GUANG           52
#define GB_DU              53
#define ASC_COLON          54
#define ASC_PLUS           55
#define ASC_MINUS          56
#define ASC_TEMP           57
#define ASC_NUM0           58
#define ASC_NUM1           59
#define ASC_NUM2           60
#define ASC_NUM3           61
#define ASC_NUM4           62
#define ASC_NUM5           63
#define ASC_NUM6           64
#define ASC_NUM7           65
#define ASC_NUM8           66
#define ASC_NUM9           67
#define ASC_POINT          68
#define ASC_GRAM           69
#define ASC_PERCENT        70
#define GB_DUAN            71
#define GB_KOU             72
#define GB_HAO             73
#define GB_CHUAN           74
#define GB_HUI             75
#define GB_KAI             76
#define GB_QI_1            77
#define GB_GUAN            78
#define GB_BI              79
#define GB_BO              80
#define GB_TE              81
#define GB_LV              82
#define GB_JIAN            83
#define GB_GE              84
#define GB_DANG            85
#define GB_QIAN            86
#define GB_ZHUANG          87
#define GB_TAI             88
#define GB_SHI_2           89
#define GB_FOU             90
#define GB_DUAN_1          91
#define ASC_QUE            92
#define GB_CHENG           93
#define GB_GONG_1          94
#define GB_QING_1          95
#define GB_FAN             96
#define GB_CHONG           97
#define GB_SHI_3           98
#define GB_SHI_4           99
#define GB_BAI             100

const u8 GB_12[][24] =          // 
{
//0
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	
    
    
	    0x04,0x00,0x7F,0xF0,0x40,0x20,0x9F,0xC0, //??????       ??:XY?12*16   ?? 12
      0x08,0x00,0x14,0xC0,0x6B,0x00,0x16,0x80,
      0x6A,0x80,0x12,0x70,0x6A,0x20,0x04,0x00,

      0x3F,0xE0,0x20,0x20,0x3F,0xE0,0x21,0x00,
      0x21,0x20,0x3F,0xF0,0x21,0x00,0x2F,0xE0,
      0x48,0x20,0x48,0x20,0x8F,0xE0,0x88,0x20,

      0x10,0x20,0xFF,0xF0,0x20,0x80,0x21,0x00,
      0xF9,0x80,0x22,0xA0,0x24,0xA0,0x28,0x90,
      0x30,0x90,0xC0,0x80,0x00,0x80,0x00,0x80,

      0x21,0x00,0x2F,0xE0,0x24,0x40,0xF2,0x80,
      0x2F,0xF0,0x24,0x20,0x27,0xE0,0x34,0x20,
      0xC7,0xE0,0x02,0x80,0x04,0x90,0x38,0x70,

      0x00,0x80,0x7C,0x80,0x44,0x80,0x7F,0xF0,
      0x44,0x90,0x44,0x90,0x7C,0x90,0x44,0x90,
      0x44,0x90,0x4E,0x90,0xF1,0x10,0x06,0x30,

      0x01,0xC0,0x7E,0x00,0x02,0x00,0x02,0x40,
      0x7F,0xE0,0x02,0x00,0x02,0x20,0xFF,0xF0,
      0x02,0x00,0x02,0x00,0x0A,0x00,0x04,0x00,
	
	
	
	   0x00,0x80,0x3F,0xC0,0x00,0x00,0x00,0x20,//云平台连接
      0xFF,0xF0,0x04,0x00,0x04,0x00,0x08,0x80,
      0x10,0x40,0x20,0x20,0x7F,0xE0,0x00,0x20,
			
			0x00,0x40,0x7F,0xE0,0x04,0x80,0x24,0x80,
      0x15,0x00,0x14,0x20,0xFF,0xF0,0x04,0x00,
      0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
			
			0x04,0x00,0x08,0x00,0x10,0x80,0x20,0x40,
      0x7F,0xE0,0x00,0x20,0x00,0x00,0x3F,0xC0,
      0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,
			
			0x02,0x00,0x42,0x20,0x2F,0xF0,0x04,0x00,
      0x09,0x40,0xEF,0xE0,0x21,0x00,0x3F,0xF0,
      0x21,0x00,0x21,0x00,0x58,0x00,0x87,0xF0,
			
			0x21,0x00,0x20,0x80,0x27,0xE0,0xF2,0x40,
      0x2F,0xF0,0x31,0x00,0xE2,0x20,0x2F,0xF0,
      0x24,0x40,0x23,0x80,0xA6,0x60,0x58,0x10,
			
			
			
			0x21,0x00,0x3D,0xF0,0x52,0x80,0x84,0x00,//等待
      0x3F,0xE0,0x04,0x00,0xFF,0xF0,0x00,0x80,
      0x7F,0xE0,0x10,0x80,0x08,0x80,0x03,0x00,
			
			0x11,0x00,0x21,0x40,0x47,0xE0,0x11,0x00,
      0x2F,0xF0,0x60,0x40,0xAF,0xF0,0x20,0x40,
      0x24,0x40,0x24,0x40,0x21,0x40,0x20,0x80,
			
			
			0x00,0x20,0x7F,0xF0,0x02,0x00,0x02,0x00, //正常
      0x22,0x40,0x23,0xE0,0x22,0x00,0x22,0x00,
      0x22,0x00,0x22,0x00,0x22,0x20,0xFF,0xF0,

      0x24,0x80,0x15,0x00,0x7F,0xF0,0x40,0x10,
      0x9F,0xA0,0x10,0x80,0x1F,0x80,0x04,0x00,
      0x3F,0xC0,0x24,0x40,0x24,0xC0,0x04,0x00,
			
			
			

0x10,0x80,0x7A,0x80,0x15,0x20,0xFD,0xF0,    /*教*/
0x12,0x20,0x7D,0x40,0x29,0x40,0xD1,0x40,
0x3C,0x80,0xD0,0x80,0x11,0x40,0x36,0x30,

0x24,0x40,0x12,0x40,0x12,0x80,0x7F,0xF0,    /*学*/
0x40,0x20,0xBF,0x80,0x01,0x00,0x06,0x20,
0xFF,0xF0,0x02,0x00,0x0A,0x00,0x06,0x00,

0x20,0x60,0x27,0x80,0x24,0x00,0xFC,0x00,    /*板*/
0x27,0xE0,0x74,0x20,0xAD,0x20,0xA5,0x40,
0x25,0x40,0x24,0x80,0x29,0x40,0x36,0x30,

0x41,0x00,0x2F,0xF0,0x10,0x10,0x8F,0xE0,    /*演*/
0x41,0x00,0x0F,0xE0,0x29,0x20,0xCF,0xE0,
0x49,0x20,0x4F,0xE0,0x44,0xC0,0x58,0x30,

0x00,0x40,0x7F,0xE0,0x00,0x00,0x00,0x20,    /*示*/
0xFF,0xF0,0x02,0x00,0x12,0x80,0x12,0x40,
0x22,0x20,0x42,0x10,0x8A,0x10,0x04,0x00,

0x00,0x00,0x00,0x00,0x30,0x00,0x10,0x00,
0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,  // -1-
0x10,0x00,0x7D,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x38,0x00,0x44,0x00,
0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,  // -2-
0x44,0x00,0x7D,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x38,0x00,0x44,0x00,
0x04,0x00,0x18,0x00,0x04,0x00,0x04,0x00,  // -3-
0x44,0x00,0x39,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x0C,0x00,0x14,0x00,
0x14,0x00,0x24,0x00,0x44,0x00,0x7E,0x00,  // -4-
0x04,0x00,0x05,0x00,0x00,0x00,0x00,0x00,

0x22,0x00,0x23,0xE0,0x52,0x40,0x94,0x80,    /*络*/
0xE9,0x00,0x42,0xC0,0xF4,0x30,0x8F,0xE0,
0x14,0x20,0xE4,0x20,0x07,0xE0,0x04,0x20,

0x04,0x00,0x08,0x80,0x3F,0xC0,0x04,0x20,    /*参*/
0xFF,0xF0,0x11,0x00,0x24,0xC0,0x59,0x30,
0xA6,0x00,0x18,0xC0,0x03,0x00,0x7C,0x00,

0x94,0x80,0x58,0x80,0xFD,0xF0,0x31,0x20,    /*数*/
0x5A,0x20,0x90,0x40,0x21,0x40,0xFD,0x40,
0x48,0x80,0x30,0x80,0x29,0x40,0xC6,0x30,

0x0F,0xE0,0x42,0x80,0x21,0x00,0x0F,0xE0,    /*通*/
0x09,0x20,0xEF,0xE0,0x29,0x20,0x2F,0xE0,
0x29,0x20,0x29,0x60,0x50,0x00,0x8F,0xF0,

0x40,0x40,0x2F,0xE0,0x02,0x40,0x02,0x40,    /*讯*/
0xE2,0x40,0x2F,0xC0,0x22,0x40,0x22,0x40,
0x22,0x50,0x32,0x50,0x22,0x50,0x02,0x30,

0x20,0x20,0x27,0xF0,0x24,0x20,0xFF,0xE0,    /*据*/
0x24,0x80,0x37,0xF0,0xE4,0x80,0x24,0xA0,
0x2B,0xF0,0x2A,0x20,0xAB,0xE0,0x52,0x20,

0x00,0x40,0x3F,0xE0,0x20,0x40,0x3F,0xC0,    /*显*/
0x20,0x40,0x3F,0xC0,0x49,0x00,0x29,0x20,
0x29,0x40,0x29,0x80,0x09,0x20,0xFF,0xF0,

0x04,0x00,0x04,0x20,0xFF,0xF0,0x06,0x00,     /*本*/
0x0D,0x00,0x15,0x00,0x14,0x80,0x24,0x40,
0x5F,0xB0,0x84,0x00,0x04,0x00,0x04,0x00,

0x01,0x00,0x21,0x00,0x25,0x20,0x25,0x70,     /*地*/
0xF5,0xA0,0x2F,0x20,0x25,0x20,0x25,0x60,
0x35,0x00,0x64,0x10,0x84,0x10,0x03,0xF0,

0x21,0x00,0x20,0x80,0x27,0xF0,0xFC,0x10,      /*控*/
0x22,0x40,0x34,0x20,0x60,0x00,0xA7,0xE0,
0x21,0x00,0x21,0x00,0xA1,0x00,0x4F,0xF0,

0x10,0x20,0x50,0x20,0x7E,0xA0,0x90,0xA0,     /*制*/
0xFE,0xA0,0x10,0xA0,0x7E,0xA0,0x52,0xA0,
0x52,0xA0,0x52,0x20,0x56,0xA0,0x10,0x60,

0x47,0xC0,0x24,0x40,0x24,0x40,0x04,0x40,    /*设*/ 
0xE8,0x30,0x27,0xC0,0x24,0x40,0x22,0x80,
0x2A,0x80,0x31,0x00,0x26,0xC0,0x18,0x30,

0x08,0x80,0x0F,0xC0,0x18,0x80,0x25,0x00,   /*备*/
0x46,0x00,0x19,0x80,0x20,0x70,0xDF,0xC0,
0x12,0x40,0x1F,0xC0,0x12,0x40,0x1F,0xC0,

0x00,0x40,0x47,0xE0,0x20,0x00,0x00,0x00,   /*运*/
0x0F,0xF0,0xE2,0x00,0x22,0x80,0x24,0x40,
0x2F,0xE0,0x20,0x00,0x50,0x00,0x8F,0xF0,

0x10,0x40,0x27,0xE0,0xD0,0x00,0x10,0x00,   /*行*/
0x2F,0xF0,0x60,0x40,0xA0,0x40,0x20,0x40,
0x20,0x40,0x20,0x40,0x22,0x40,0x21,0x80,

0x08,0x00,0x04,0x40,0x7F,0xE0,0x04,0x00,   /*主*/
0x04,0x00,0x04,0x80,0x3F,0xC0,0x04,0x00,
0x04,0x00,0x04,0x00,0x04,0x20,0xFF,0xF0,

0x20,0x80,0x10,0x80,0x10,0xA0,0xFC,0xF0,   /*站*/
0x08,0x80,0x48,0xA0,0x53,0xF0,0x52,0x20,
0x1A,0x20,0x32,0x20,0xC3,0xE0,0x02,0x20,

0x00,0x80,0x20,0x80,0x20,0x80,0x24,0x80,   /*址*/
0xF4,0x80,0x24,0xF0,0x24,0x80,0x24,0x80,
0x24,0x80,0x34,0x80,0xC4,0xA0,0x1F,0xF0,

0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x20,
0x00,0x18,0x00,0x04,0x00,0x18,0x00,0x20,  // ->-
0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  //空格
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x20,0x80,0x24,0xA0,0x46,0xA0,0x55,0xC0,  /*继*/
0xE4,0x80,0x27,0xF0,0x44,0x80,0xF5,0xC0,
0x06,0xA0,0x34,0x80,0xC4,0x00,0x07,0xF0,

0x04,0x00,0x04,0x40,0x7F,0xE0,0x44,0x40,  /*电*/
0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,
0x7F,0xC0,0x04,0x10,0x04,0x10,0x03,0xF0,

0x79,0xE0,0x49,0x20,0x79,0xE0,0x49,0x20,  /*器*/
0x04,0x80,0xFF,0xF0,0x10,0x80,0x20,0x40,
0xFD,0xF0,0x25,0x20,0x3D,0xE0,0x25,0x20,

0x22,0x00,0x23,0xE0,0xFA,0x40,0xAC,0x80,  /*蜂*/
0xA9,0x40,0xAA,0xB0,0xF8,0x80,0x23,0xE0,
0x38,0x80,0xEF,0xF0,0x00,0x80,0x00,0x80,

0x01,0x00,0x02,0x40,0xF7,0xE0,0x94,0x40,  /*鸣*/
0x95,0x40,0x94,0x80,0x97,0xF0,0xF0,0x10,
0x8F,0x90,0x00,0x20,0x01,0xA0,0x00,0x40,

0x4F,0xC0,0x28,0x40,0x0F,0xC0,0x88,0x40,  /*温*/
0x4F,0xC0,0x28,0x40,0x40,0x00,0xDF,0xE0,
0x54,0xA0,0x54,0xA0,0x54,0xA0,0x7F,0xF0,

0x4F,0xE0,0x28,0x20,0x0F,0xE0,0x88,0x20,  /*湿*/
0x4F,0xE0,0x28,0x20,0x42,0x90,0xD2,0xA0,
0x4A,0xC0,0x4A,0x80,0x42,0x80,0x7F,0xF0,

0x02,0x00,0x22,0x40,0x12,0x40,0x12,0x80,  /*光*/
0x02,0x20,0xFF,0xF0,0x09,0x00,0x09,0x00,
0x09,0x10,0x11,0x10,0x21,0x10,0xC0,0xF0,

0x02,0x00,0x3F,0xE0,0x24,0x80,0x3F,0xE0,  /*度*/
0x24,0x80,0x27,0x80,0x20,0x00,0x2F,0x80,
0x25,0x00,0x42,0x00,0x8D,0x80,0xB0,0x70,
			
0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,
0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,  // -:-
0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x08,0x00,0x08,0x00,
0x3E,0x00,0x08,0x00,0x08,0x00,0x08,0x00,  // -+-
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,  // ---
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x40,0x00,0x1E,0x00,
0x22,0x00,0x20,0x00,0x20,0x00,0x22,0x00,  // -℃-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1C,0x00,0x22,0x00,0x22,0x00,
0x22,0x00,0x22,0x00,0x22,0x00,0x22,0x00,  // -0-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x18,0x00,0x08,0x00,0x08,0x00,
0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,  // -1-
0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1C,0x00,0x22,0x00,0x02,0x00,
0x04,0x00,0x08,0x00,0x10,0x00,0x22,0x00,  // -2-
0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1C,0x00,0x22,0x00,0x02,0x00,
0x0C,0x00,0x02,0x00,0x02,0x00,0x22, 0x00, // -3-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x0C,0x00,0x14,0x00,0x14,0x00,
0x24,0x00,0x44,0x00,0x7E,0x00,0x04,0x00,  // -4-
0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1E,0x00,0x10,0x00,0x10,0x00,
0x1C,0x00,0x02,0x00,0x02,0x00,0x22,0x00,  // -5-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x0E,0x00,0x10,0x00,0x20,0x00,
0x3C,0x00,0x22,0x00,0x22,0x00,0x22,0x00,  // -6-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x3E,0x00,0x22,0x00,0x02,0x00,
0x04,0x00,0x04,0x00,0x04,0x00,0x08,0x00,  // -7-
0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1C,0x00,0x22,0x00,0x22,0x00,
0x1C,0x00,0x22,0x00,0x22,0x00,0x22,0x00, // -8-
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1C,0x00,0x22,0x00,0x22,0x00,
0x22,0x00,0x1E,0x00,0x02,0x00,0x04,0x00,  // -9-
0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,  // -.-
0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x1A,0x00,0x26,0x00,0x22,0x00,
0x22,0x00,0x22,0x00,0x1E,0x00,0x02,0x00, // -g-
0x02,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,

0x10,0x00,0x28,0x00,0x10,0x00,0x06,0x00,
0x38,0x00,0x04,0x00,0x0A,0x00,0x04,0x00,  // -%-
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x40,0x80,0x22,0x90,0x03,0xF0,0xF8,0x00,   /*端*/
0x0F,0xF0,0x50,0x80,0x57,0xF0,0x45,0x50,
0x35,0x50,0xC5,0x50,0x05,0x50,0x04,0x30,

0x00,0x00,0x00,0x40,0x3F,0xE0,0x20,0x40,   /*口*/
0x20,0x40,0x20,0x40,0x20,0x40,0x20,0x40,
0x20,0x40,0x3F,0xC0,0x20,0x40,0x00,0x00,

0x3F,0xC0,0x20,0x40,0x20,0x40,0x3F,0xC0,  /*号*/
0x00,0x20,0xFF,0xF0,0x08,0x00,0x1F,0xC0,
0x00,0x40,0x00,0x80,0x04,0x80,0x03,0x00,

0x04,0x00,0x04,0x40,0x3F,0xE0,0x24,0x40,   /*串*/
0x3F,0xC0,0x04,0x20,0x7F,0xF0,0x44,0x20,
0x7F,0xE0,0x44,0x20,0x04,0x00,0x04,0x00,

0x00,0x20,0x7F,0xF0,0x40,0x20,0x4F,0x20,  /*回*/
0x49,0x20,0x49,0x20,0x49,0x20,0x4F,0x20,
0x40,0x20,0x40,0x20,0x7F,0xE0,0x40,0x20,

0x00,0x40,0x7F,0xE0,0x08,0x80,0x08,0x80,   /*开*/
0x08,0xA0,0xFF,0xF0,0x08,0x80,0x08,0x80,
0x10,0x80,0x10,0x80,0x20,0x80,0xC0,0x80,

0x04,0x00,0x02,0x00,0x3F,0xE0,0x20,0x20,   /*启*/
0x3F,0xE0,0x20,0x00,0x20,0x00,0x2F,0xE0,
0x48,0x20,0x48,0x20,0x8F,0xE0,0x08,0x20,

0x10,0x80,0x09,0x00,0x02,0x40,0x7F,0xE0,   /*关*/
0x04,0x00,0x04,0x20,0xFF,0xF0,0x04,0x00,
0x05,0x00,0x08,0x80,0x30,0x40,0xC0,0x30,

0x20,0x20,0x57,0xF0,0x42,0x20,0x42,0x20,   /*闭*/
0x5F,0xA0,0x46,0x20,0x4A,0x20,0x52,0x20,
0x62,0x20,0x4A,0x20,0x44,0x20,0x40,0x60,

0x41,0x00,0x21,0x00,0x2F,0xE0,0x89,0x20,  /*波*/
0x49,0x00,0x2F,0xC0,0x28,0x40,0xCA,0x40,
0x4A,0x80,0x49,0x80,0x52,0x40,0x24,0x30,

0x21,0x00,0x21,0x40,0xA7,0xE0,0xF1,0x00,   /*特*/
0xA1,0x20,0x2F,0xF0,0x30,0x40,0xEF,0xF0,
0x22,0x40,0x22,0x40,0x20,0x40,0x20,0xC0,

0x02,0x00,0xFF,0xF0,0x04,0x20,0x49,0x40,   /*率*/
0x2E,0x80,0x15,0x40,0x6F,0xA0,0x82,0x10,
0x02,0x00,0xFF,0xF0,0x02,0x00,0x02,0x00,

0x20,0x20,0x17,0xF0,0x40,0x20,0x4F,0x20,   /*间*/
0x49,0x20,0x4F,0x20,0x49,0x20,0x49,0x20,
0x4F,0x20,0x48,0x20,0x40,0xA0,0x40,0x60,

0x00,0x20,0xFF,0xF0,0x90,0x00,0xA7,0xC0,   /*隔*/
0xC4,0x40,0xAF,0xF0,0x98,0x10,0xDA,0x90,
0xAF,0xF0,0x89,0x10,0x89,0x10,0x88,0x20,

0x04,0x00,0x04,0x40,0x24,0x40,0x14,0x80,   /*当*/
0x05,0x20,0x7F,0xF0,0x00,0x20,0x3F,0xE0,
0x00,0x20,0x00,0x20,0x7F,0xE0,0x00,0x20,

0x10,0x80,0x09,0x20,0xFF,0xF0,0x00,0x00,   /*前*/
0x7D,0x20,0x45,0x20,0x7D,0x20,0x45,0x20,
0x7D,0x20,0x45,0x20,0x44,0xA0,0x4C,0x40,

0x11,0x00,0x11,0x40,0x91,0x20,0x51,0x00,   /*状*/
0x5F,0xF0,0x11,0x00,0x31,0x00,0x51,0x80,
0x92,0x40,0x12,0x40,0x14,0x20,0x18,0x10,

0x04,0x00,0x04,0x20,0xFF,0xF0,0x0A,0x00,   /*态*/
0x09,0x00,0x14,0x80,0x62,0x70,0x04,0x00,
0x52,0x20,0x52,0x10,0x90,0x50,0x0F,0xC0,

0x1F,0x80,0x10,0x80,0x1F,0x80,0x10,0x80,   /*是*/
0x1F,0x80,0x00,0x20,0xFF,0xF0,0x02,0x00,
0x13,0xE0,0x12,0x00,0x2E,0x00,0xC3,0xF0,

0x00,0x20,0xFF,0xF0,0x04,0x00,0x0D,0x80,  /*否*/
0x14,0x60,0x64,0x30,0x84,0x40,0x3F,0xC0,
0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,

0x08,0x30,0x49,0xC0,0x5D,0x00,0x49,0x00,  /*断*/
0x7F,0xF0,0x49,0x20,0x5D,0x20,0x6B,0x20,
0x49,0x20,0x41,0x20,0x7E,0x20,0x04,0x20,

0x00,0x00,0x00,0x00,0x18,0x00,0x24,0x00,
0x04,0x00,0x08,0x00,0x10,0x00,0x00,0x00, // -?-
0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x02,0x80,0x02,0x40,0x3F,0xF0,0x22,0x00,  /*成*/ 
0x22,0x40,0x3A,0x40,0x29,0x40,0x29,0x40,
0x28,0x90,0x59,0x90,0x42,0x50,0x8C,0x30,

0x01,0x00,0x11,0x00,0xF9,0x20,0x27,0xF0,  /*功*/
0x21,0x20,0x21,0x20,0x21,0x20,0x39,0x20,
0xC2,0x20,0x04,0x20,0x08,0xA0,0x30,0x40,

0x01,0x20,0x4F,0xF0,0x21,0x00,0x07,0xE0,  /*请*/
0xE1,0x00,0x2F,0xF0,0x24,0x20,0x27,0xE0,
0x2C,0x20,0x37,0xE0,0x24,0x20,0x04,0x60,

0x40,0xE0,0x27,0x00,0x24,0x00,0x07,0xE0,  /*返*/
0x04,0x20,0xE6,0x40,0x25,0x40,0x28,0x80,
0x31,0x40,0x26,0x20,0x50,0x00,0x8F,0xF0,

0x03,0x80,0x3C,0x00,0x04,0x20,0xFF,0xF0,  /*重*/
0x24,0x40,0x3F,0xC0,0x24,0x40,0x3F,0xC0,
0x04,0x00,0x7F,0xE0,0x04,0x00,0xFF,0xF0,

0x40,0x80,0x20,0xB0,0x00,0x80,0x1F,0xF0,  /*试*/
0xC0,0x80,0x4F,0x80,0x42,0x80,0x42,0x40,
0x4A,0x50,0x53,0x50,0x6C,0x30,0x00,0x10,

0x04,0x00,0x24,0x40,0x3F,0xE0,0x44,0x00,  /*失*/
0x04,0x20,0xFF,0xF0,0x04,0x00,0x04,0x00,
0x09,0x00,0x10,0x80,0x20,0x40,0xC0,0x30,

0x01,0x00,0x7D,0x20,0x45,0xF0,0x45,0x20,  /*败*/
0x56,0x20,0x55,0x40,0x55,0x40,0x55,0x40,
0x10,0x80,0x28,0xC0,0x41,0x20,0x86,0x10

};
#endif

