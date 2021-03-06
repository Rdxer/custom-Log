//
//  CustomLogTools.h
//  custom Log
//
//  Created by LXF on 16/1/1.
//  Copyright © 2016年 LXF. All rights reserved.
//

#ifndef CustomLogTools_h
#define CustomLogTools_h



#define defaultColor "_"

#define NSLog(format, ...)   {\
    LXFPrintf("😐",defaultColor,defaultColor,defaultColor,defaultColor,"🎉",format, ##__VA_ARGS__); \
}

// OK
#define printOK(format, ...)   {\
LXFPrintf("💯","#00F72C",defaultColor,"#00F72C",defaultColor,"🎉",format, ##__VA_ARGS__); \
}

// debug
#define printD(format, ...)   {\
    LXFPrintf("😁","00f",defaultColor,"00f",defaultColor,"🎉",format, ##__VA_ARGS__); \
}

// Warning
#define printW(format, ...)   {\
    LXFPrintf("⚠️","d84",defaultColor,"d84",defaultColor,"🎉",format, ##__VA_ARGS__); \
}

// error
#define printE(format, ...)   {\
    LXFPrintf("❌","f00",defaultColor,"f00",defaultColor,"🎉",format, ##__VA_ARGS__); \
}

// print obj
#define printOBJ(obj)   {\
    LXFPrintf("⚽️",defaultColor,defaultColor,defaultColor,defaultColor,"🎉",@"%@",obj); \
}



// titlefg title 前景色,titlebg 背景色,contentfg 内容前景色,contentbg 以此类推
#define LXFPrintf(tag,titlefg,titlebg,contentfg,contentbg,split,format, ...)  {\
    const char *fileName = [NSString stringWithUTF8String:__FILE__].lastPathComponent.UTF8String;\
    const char *content = [[NSString stringWithFormat:format,##__VA_ARGS__]UTF8String];\
    printf("$(%s,%d,%s,%s,%s,%s)%s%s + %d %s %s$(end)\n",fileName,__LINE__,titlefg,titlebg,contentfg,contentbg,tag,__PRETTY_FUNCTION__,__LINE__,split,content);\
}

#endif /* CustomLogTools_h */
