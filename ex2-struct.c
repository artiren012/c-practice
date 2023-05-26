//
//  ex2-struct.c
//  c-study
//

#include <stdio.h>

union example {
    int i;
    char c;
};

enum days {
    SUN, MON, TUE, WED, THR, FRI, SAT
};
char *days_name[] = { "일", "월", "화", "수", "목", "금", "토" };

typedef struct point {
    int x;
    int y;
} POINT;

POINT translate(POINT p, POINT delta) {
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;
    return new_p;
}

int main(void) {
    // union
    union example v;
    
    v.c = 'A';
    printf("v.c=%c, v.i=%i\n", v.c, v.i);
    printf("v.c=%02x, v.i=%08x\n\n", v.c, v.i);
    
    v.i = 10000;
    printf("v.c=%c, v.i=%i\n", v.c, v.i);
    printf("v.c=%02x, v.i=%08x\n\n", v.c, v.i);
    
    // enum
    enum days d;
    d = WED;
    printf("%d번째 요일은 %s요일 입니다.\n\n", d, days_name[WED]);
        
    // typedef - struct
    POINT point = { 100, 200 };
    POINT delta = { 40, 20 };
    POINT newPoint = translate(point, delta);
    printf("point.x=%d, point.y=%d\n", newPoint.x, newPoint.y);
    
    return 0;
}
