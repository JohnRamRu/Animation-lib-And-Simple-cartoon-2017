    //#include "TXlib.h"
    #include "JRAnimaLib.h"
    #include <cstdlib>
    #include <ctime>
    #include <locale.h>

    /*CONST COLORREF MYNEWYELLOW = RGB (255, 255, 0);
    CONST COLORREF MYNEWRED = RGB (255, 0, 0);
    CONST COLORREF MYNEWORANGE = RGB (255, 165, 0);
    CONST COLORREF MYNEWDARKGOLD = RGB (255, 187, 60);
    CONST COLORREF MYNEWBLUE = RGB (0, 0, 128);
    CONST COLORREF MYNEWGRAY = RGB (192, 192, 192);
    CONST COLORREF MYNEWFACE = RGB (253, 228, 200);
    CONST COLORREF MYNEWBLUE2 = RGB (0, 191, 255);
    CONST COLORREF MYNEWBROWN = RGB (143, 60, 18);
    CONST COLORREF MYNEWMOUNTH = RGB (250, 128, 114);*/

    /*void drawStar(int i, int xx, int yy);

    void drawNarutoAll(int z, int k, int L, COLORREF faceColor, COLORREF eyeColor, COLORREF beltColor, bool animation, COLORREF upHairColor, COLORREF middleHairColor, COLORREF downHairColor);// ВОЛОСЫ*3 + outLine

    void drawBall(int x, int y, int r, COLORREF ballColor, int ballOutSise, COLORREF ballFillColor, COLORREF lineColor, int lineSise, COLORREF middleBallColor, int midlleBallOutSise, COLORREF middleBallFillColor);

    void drawHuman(int x, int y, int headR, COLORREF headColor, int headOutSise, COLORREF headFillColor, COLORREF bodyColor, int bodySise, bool handHappy, bool face);

    void drawHouse(int x, int y, COLORREF houseColor, int siseLineHouse, COLORREF houseFillColor, COLORREF windowColor, int windowLineSise, COLORREF windowFillColor, COLORREF lineInWindowColor, int siseLineInWindow);

    void drawPacman(int x, int y, int headR, int eatR, int eyeR, COLORREF pacColor, COLORREF pacFillColor, COLORREF eyeColor, COLORREF eyeFillColor, COLORREF eatColor, COLORREF eatFillColor);

    void drawSun(int x, int y, int r, COLORREF sunColor, int sunOutSise, COLORREF sunFillColor, COLORREF sunLineColor, int sunLineSise, bool faceSun, bool middleLine, bool otherLine);

    void drawNarutoMouth(int z, int k, bool animation);

    void drawNarutoFace(int z, int k, COLORREF faceColor, COLORREF eyeColor, bool animation);

    void drawNarutoBelt(int z, int k, COLORREF beltColor);

    void drawNarutoHair(int z, int k, int L, COLORREF upHairColor, COLORREF middleHairColor, COLORREF downHairColor);

    void repeatPacMan(int screenX, int screenY, int headR);

    void drawStarLogo(int x, int y, double s);

    void drawDerevo(int x, int y);

    void drawCloud(int x, int y);*/


    int main(){
    txBegin();

    setlocale(LC_ALL, "Rus");//ПОДКЛЮЧИТЬ РУССКИЙ ЯЗЫК!!

    int xSizeWindow, ySizeWindow;
    xSizeWindow = 1360;
    ySizeWindow = 768;
    txCreateWindow (xSizeWindow, ySizeWindow);
    HDC space  = txLoadImage ("star.bmp");  // Пример загрузки картинки
    /////////////////////////
    int r = 62, g = 208, b = 213;
    COLORREF COSMOSCOLOR = RGB (r, g, b);
    txSetColor(COSMOSCOLOR);

    txSelectFont ("Arial", 90, 30, FW_BOLD, false, false, false, 0);//последнее - наклон
    txSetTextAlign(TA_LEFT);
    txDrawText(200, 260, 1100, 360, "A long time ago in a galaxy far,");
    txDrawText(200, 310, 500, 460, "far away. . . .");
    txSleep(5000);
    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK);
    txClear();

    ////////////////////////
    txPlaySound ("STARWARS.wav");
   // txSleep(50);
    double s = 2;
    int xlogo = 150;
    int yLogo = 100;
    txBitBlt (txDC(), 0, 0, 1360, 220, space, 0, 0);
    txBitBlt (txDC(), 0, 220, 1360, 768, space, 0, 0);
    drawStarLogo(xlogo, yLogo, s);
    txSleep(5500);
    while(s>0.25){
    txBitBlt (txDC(), 0, 0, 1360, 220, space, 0, 0);
    txBitBlt (txDC(), 0, 220, 1360, 768, space, 0, 0);
    drawStarLogo(xlogo, yLogo, s);
    s = s-0.01;
    xlogo = xlogo + 8;
    yLogo = yLogo + 4;
    txClear();
    txSleep(1);
    }
    txClear();

    int y = 1360;
    int y1 = 768;
    int t=0;

    txSelectFont ("Arial", 50, 16, FW_BOLD, false, false, false, 0);
    setlocale(LC_CTYPE, "");
    while(y>=440){
    txBitBlt (txDC(), 0, 220, 1360, 768, space, 0, 0);
    txSetColor(MYNEWYELLOW);
    txSetTextAlign(TA_TOP);
    txDrawText(0, y1, 1360, y, "PART 1\n"
               "\n"
               "Young Jedi Naruto is trying to save the planet Nibiru\n"
               "from the grip of her evil Robot-balls. It arrives\n"
               "to the village in search of help and support to win\n"
                "over the evil forces. He asks for help from the locals - old-scholar chelovechki\n"
                 "But he doesn't know how strong the robots...");
    txBitBlt (txDC(), 0, 0, 1360, 220, space, 0, 0);
    txSleep(1);
    txClear;

    t++;
    if(t == 4){
    y--;
    y1--;
    t = 0;
    }
    }
    txPlaySound(NULL);
    txClear();
    txPlaySound ("STARCONF.wav");
    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    int dereviya = 100;
    int derevoX[dereviya];
    int k=0;
    while(k<dereviya){
        derevoX[k] = 160*k;
        k++;
    }
    k=0;
    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }
    int Housex = 200;
    int Housey = 610;
    t=0;
    while(t<131){

    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    k=0;
    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }

    if(t>=20&&t<=30){
        txSetColor(MYNEWBROWN);
        txSetFillColor(MYNEWBROWN);
        txRectangle(350, 550, 400, 700);
    }

    if(t>=25&&t<=135){
            if(t>=60&&t<=90&&t%4==0){
            drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            drawHuman(650, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            drawHuman(550, 500, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            }else{
    drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
    drawHuman(650, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
    drawHuman(550, 500, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
            }
    }

    if(t>=50){
            if(t%4==0&& t>=90&& t<=130){
             drawNarutoAll(950, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, true, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
            }else{
    drawNarutoAll(950, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
            }
    }else{

    }

    if(t>=131){
     drawNarutoAll(950-(t-99), 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
     Housex = Housex-(t-99);
     k=0;
     while(k<dereviya){
        derevoX[k] = 160*k-(t-99)*2;
        k++;
    }

    }
    if(t>=131 && t<=141){
        txSetColor(MYNEWBROWN);
        txSetFillColor(MYNEWBROWN);
        txRectangle(350, 550, 400, 700);
    }

    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);

    if(t%2==0){
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);
    txSetColor(TX_WHITE);
    drawCloud(350, 25);
    drawCloud(950, 25);
    txSleep(200);
    }else{
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);
    txSetColor(TX_WHITE);
    drawCloud(350, 50);
    drawCloud(950, 50);
    txSleep(350);
    }


    txClear();
    t++;
    }
    txClear();

    t=0;

    while(t<73){

    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    k=0;

    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }

     if(t>=0&&t<=72){
     drawNarutoAll(950-t*10, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
     Housex = Housex-(t);
     k=0;
     while(k<dereviya){
        derevoX[k] = 160*k-t*6;
        k++;
    }

    }

    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);

    if(t%2==0){
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);
    txSetColor(TX_WHITE);
    drawCloud(350, 25);
    drawCloud(950, 25);
    txSleep(200);
    }else{
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);
    txSetColor(TX_WHITE);
    drawCloud(350, 50);
    drawCloud(950, 50);
    txSleep(350);
    }


    txClear();
    t++;
    }

    txClear();

    t=0;
    int xRed = 890;
    int yNaruto = 500;
    int xGreen = 300;

    while(t<=152){

    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    k=0;

    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }

    if(t>=0&&t<=10){
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    drawBall(950, 500, 50, MYNEWORANGE, 5, MYNEWRED, MYNEWBLUE2, 5, TX_BLACK, 2, TX_WHITE);
    }

    if(t>=10&&t<56){
    drawBall(950, 500, 50, MYNEWORANGE, 5, MYNEWRED, MYNEWBLUE2, 5, TX_BLACK, 2, TX_WHITE);
    txSetColor(TX_RED, 10);
    xRed = xRed-(t-10)*25;
    txLine(xRed, 500, xRed-100, 500);
    txSetColor(MYNEWBLUE2, 10);
    if(xGreen<=650){
    xGreen = xGreen+50+(t-10)*10;
    txLine(xGreen, 500, xGreen+100, 500);
    }else{
     //txLine(xGreen, 500, xGreen+100, 500);
    }
    if(t>=10&&t<=45){
            yNaruto = yNaruto-(t)*5;
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    }else if (t>=45&& t<=55){
        yNaruto = yNaruto+(t-32)*2;
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    }
    }

    xRed = 890;
    yNaruto = 500;
    xGreen = 300;
    if(t==60){
    txPlaySound (NULL);
    txPlaySound ("STARCONF2.wav");
    }

    if(t>=55&& t<=68){
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    drawBall(950, 500, 50, MYNEWORANGE, 5, MYNEWRED, MYNEWBLUE2, 5, TX_BLACK, 2, TX_WHITE);
    }
    if(t>=66&&t<=121){
    drawBall(950, 500, 50, MYNEWORANGE, 5, MYNEWRED, MYNEWBLUE2, 5, TX_BLACK, 2, TX_WHITE);
    txSetColor(TX_RED, 10);
    xRed = xRed -(t-65)*25;
    txLine(xRed, 500, xRed-100, 500);
    txSetColor(MYNEWBLUE2, 10);
    xGreen = xGreen+50+(t-65)*10;
    if(xGreen<=850){

    txLine(xGreen, 500, xGreen+100, 500);
    }else{
     //txLine(xGreen, 500, xGreen+100, 500);
    }

    if(t>=70&&t<=106){
            yNaruto = yNaruto-(t-50)*5;
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    }else if (t>=106&& t<=121){
        yNaruto = yNaruto+(t-80)*2;
    drawNarutoAll(950-720, yNaruto, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    }

    }

    if(t>=121&&t<150){
     drawNarutoAll(950-720, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
     drawBall(950, 500, 50, MYNEWRED, 5, MYNEWRED, MYNEWRED, 5, MYNEWRED, 2, MYNEWRED);
    }
    if(t>=150){
     drawNarutoAll(950-720, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
    }

    k=0;
    while(k<dereviya){
        derevoX[k] = 160*k-432-t*4;
        k++;
    }

    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);

    if(t%2==0){
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);
    txSetColor(TX_WHITE);
    drawCloud(350, 25);
    drawCloud(950, 25);
    txSleep(200);
    }else{
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);
    txSetColor(TX_WHITE);
    drawCloud(350, 50);
    drawCloud(950, 50);
    txSleep(350);
    }


    txClear();
    t++;
    }
    txClear();
    txPlaySound (NULL);
    txPlaySound ("STAREND.wav");

    t=0;
    while(t<40){

    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    k=0;

    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }

     if(t>=0&&t<=35){
     drawNarutoAll(950+t*7, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);
     Housex = Housex+(t+19)*2;
     k=0;
     while(k<dereviya){
        derevoX[k] = 160*k+t*2-120*4-432;
        k++;
    }

    }

    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);

    if(t%2==0){
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);
    txSetColor(TX_WHITE);
    drawCloud(350, 25);
    drawCloud(950, 25);
    txSleep(200);
    }else{
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);
    txSetColor(TX_WHITE);
    drawCloud(350, 50);
    drawCloud(950, 50);
    txSleep(350);
    }


    txClear();
    t++;
    }
    txClear();
    t=0;
    while(t<80){

    txSetColor(MYNEWBLUE2);
    txSetFillColor(MYNEWBLUE2);
    txRectangle(0, 384, 1360, 0);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0, 384, 1360, 768);
    k=0;
    while(k<dereviya){
        drawDerevo(derevoX[k], 384-160);
        k++;
    }

    if(t>=10&&t<=20){
        txSetColor(MYNEWBROWN);
        txSetFillColor(MYNEWBROWN);
        txRectangle(350, 550, 400, 700);
    }
    if(t>=25&&t<=65){
            if(t>=35&&t<=55&&t%4==0){
            drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            drawHuman(650, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            drawHuman(550, 500, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, true, true);
            }else{
    drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
    drawHuman(650, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
    drawHuman(550, 500, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);
            }
    }

    drawNarutoAll(950, 500, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);


    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);

    if(t%2==0){
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);
    txSetColor(TX_WHITE);
    drawCloud(350, 25);
    drawCloud(950, 25);
    txSleep(200);
    }else{
    drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);
    txSetColor(TX_WHITE);
    drawCloud(350, 50);
    drawCloud(950, 50);
    txSleep(350);
    }


    txClear();
    t++;
    }
    txClear();
    txPlaySound(NULL);
    txPlaySound("ENDIT.wav");

    y = 1360;
    y1 = 768;
    t=0;

    txSelectFont ("Arial", 50, 16, FW_BOLD, false, false, false, 0);
    setlocale(LC_CTYPE, "");
    int xP=0;
    while(y>=0){

    txBitBlt (txDC(), 0, 0, 1360, 768, space, 0, 0);
    txSetColor(MYNEWYELLOW);
    txSetTextAlign(TA_TOP);
    drawPacman(xP, 384, 192, 10, 25, MYNEWFACE, MYNEWFACE, TX_BLACK, TX_BLACK, TX_NULL, TX_NULL);
    txSetColor(MYNEWYELLOW);
    txDrawText(0, y1, 1360, y+500, "END\n"
                                "\n"
                                "Film director: Evgeny 'JohnRam' Ageev\n"
                                "\n"
                                "\n"
                                "The film stars:\n"
                                "\n"
                                "Naruto\n"
                                "Three chelovechki\n"
                                "Evil Ball\n"
                                "Sun and clouds\n"
                                "Trees, House and background PacMan\n");

    txSleep(1);
    txClear;

    t++;
    if(t == 2){
    y--;
    y1--;
    xP++;
    t = 0;
    }
    }
    txPlaySound(NULL);
    /*int DD =0;
    while(DD!=1){

    txClear();
    drawHouse(Housex, Housey, TX_BLACK, 5, TX_RED, TX_BLUE, 5, MYNEWBLUE2, TX_BLUE, 3);
    txRectangle(350, 550, 400, 700);

    }*/

        //drawNarutoAll(667, 200, 5, MYNEWFACE, MYNEWBLUE2, MYNEWBLUE, false, MYNEWDARKGOLD, MYNEWORANGE, MYNEWYELLOW);


    //drawPacman(920, 550, 192, 10, 25, TX_GREEN, TX_RED, TX_WHITE, TX_BLACK, TX_ORANGE, TX_BLACK);
    //repeatPacMan(7, 29);

    //drawHuman(80, 350, 65, TX_BLACK, 5, TX_BLUE, TX_GREEN, 8, true, true);

    //drawBall(1050, 250, 120, TX_RED, 4, TX_GREEN, TX_YELLOW, 5, TX_WHITE, 5, TX_BLACK);

    //drawNarutoFace(697, 200, MYNEWFACE, MYNEWBLUE2, false);
    //drawNarutoBelt(667, 200, MYNEWBLUE);

    //drawHouse(350, 520, TX_RED, 5, TX_BLUE, TX_GREEN, 8, TX_WHITE, TX_BLACK, 3);

    //repeatPacMan(xSizeWindow, ySizeWindow, 100);

    //drawSun(320, 181, 50, TX_RED, 6, TX_YELLOW, TX_GREEN, 8, true, true, true);

    //int repeatTime = 7;
    //int repeatPixel = 100;
    //int i = 1;
    //while (repeatTime >= i){
    //drawPacman(105+(repeatPixel*i), 550, 10, 25, TX_GREEN, TX_RED, TX_WHITE, TX_BLACK, TX_ORANGE, TX_BLACK);
    //i++;
    //}




    txDeleteDC(space);
    txEnd();
    return 0;
    }
    //JOHNRAM


    //JOHNRAM
    //JOHNRAM
    //JOHNRAM
