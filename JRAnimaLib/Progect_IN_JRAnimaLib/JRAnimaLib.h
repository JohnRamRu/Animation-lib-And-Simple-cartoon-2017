    #include "TXlib.h"
    #include <cstdlib>
    #include <ctime>
    #include <locale.h>




    void drawCloud(int x, int y);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Создание достаточно кривого облачка для вашего неба
    //!
    //! @par x - отвечает за положение центра облака относительно X
    //!      y - отвечает за положение центра облака относительно Y
    //!
    //! @usage @code
    //!          drawCloud(125, 125);//Рисует облачко, ничего особенного
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------


    void drawDerevo(int x, int y);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Создание 2 деревьев для заднего фона
    //!
    //! @note    Рекомендуемо, для зацикленного прорисывывания
    //!
    //! @warning Создает паттерн (квадрат), где создаются 2 дерева, верхний левый угол -
    //!          самая левая точка на деревьях и самая верхняя. @nn
    //!
    //! @par x - отвечает за положение верхнего левого угла паттерна относительно X
    //!      y - отвечает за положение верхнего левого угла паттерна относительно Y
    //!
    //! @usage @code
    //!          int k=500;
    //!          while(k<0){
    //!          drawDerevo(k, 125);
    //!          k=k-50;
    //!          }
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawStarLogo(int x, int y, double s);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует логотип StarWars
    //!
    //! @warning Логотип - не текстовый вид, все отрисовывается отдельно @nn
    //!
    //! @par x - отвечает за положение верхнего левого угла логотипа относительно X
    //!      y - отвечает за положение верхнего левого угла логотипа относительно Y
    //!      s - размер логотипа (для истинного размера - 1)
    //!
    //! @usage @code
    //!          drawStarLogo(300, 250, 2);//рисуем логотип
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawBall(int x, int y, int r, COLORREF ballColor, int ballOutSise, COLORREF ballFillColor, COLORREF lineColor, int lineSise, COLORREF middleBallColor, int midlleBallOutSise, COLORREF middleBallFillColor);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует мяч, похожий на очертание бразильского флага
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par x - отвечает за положение центра мяча относительно X
    //!      y - отвечает за положение центра мяча относительно Y
    //!      r - размер мяча (для истинного размера - 50)
    //!      ballColor - цвет заливки обводки мяча
    //!      ballOutSise - размер линии обводки мяча
    //!      ballFillColor - цвет заливки основного пространства мяча
    //!      lineColor - цвет заливки символа
    //!      lineSise - размер линии символа
    //!      middleBallColor - цвет заливки обводки центрального шарика
    //!      midlleBallOutSise - размер центрального маленького шарика
    //!      middleBallFillColor - цвет заливки основного пространства центрального шарика
    //!
    //! @usage @code
    //!          drawBall(950, 500, 50, TX_GREEN, 5, TX_RED, TX_BLUE, 5, TX_BLACK, 2, TX_WHITE);//рисуем мячик
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawHuman(int x, int y, int headR, COLORREF headColor, int headOutSise, COLORREF headFillColor, COLORREF bodyColor, int bodySise, bool handHappy, bool face);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует кастомного человека, он достаточно кривой)
    //!
    //! @note    Рекомендуемо, для рисования дергающегося человека в мультике
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par x - отвечает за положение человечка относительно X
    //!      y - отвечает за положение человечка относительно Y
    //!      headR - размер головы (для истинного размера - 10)
    //!      headColor - цвет заливки обводки головы
    //!      headOutSise - размер линии обводки головы
    //!      headFillColor - цвет заливки основного пространства головы
    //!      bodyColor - цвет заливки тела
    //!      bodySise - размер линии символа
    //!      handHappy - если 1, то поднимает руки, если 0, то нет
    //!      face - если 1, то отображает достаточно кривое лицо (глаза и рот)
    //!
    //! @usage @code
    //!           drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);//рисуем спокойного человечка
    //!           txSleep(500);
    //!           drawHuman(450, 400, 40, TX_BLACK, 5, TX_WHITE, TX_BLACK, 5, false, true);//ТЕПЕРЬ ОН ОЖИЛ, БЕГИТЕ!
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawSun(int x, int y, int r, COLORREF sunColor, int sunOutSise, COLORREF sunFillColor, COLORREF sunLineColor, int sunLineSise, bool faceSun, bool middleLine, bool otherLine);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует солнышко. ОНО ОЧЕНЬ УПОРОТОЕ, ИСПОЛЬЗУЙТЕ НА СВОЙ СТАРХ И РИСК
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par x - отвечает за положение солнца относительно X
    //!      y - отвечает за положение солнца относительно Y
    //!      r - размер солнца (для истинного размера - 25)
    //!      sunColor - цвет заливки обводки солнца
    //!      sunOutSise - размер линии обводки солнца
    //!      sunFillColor - цвет заливки основного пространства солнца
    //!      sunLineColor - цвет заливки лучей
    //!      sunLineSise - размер лучей
    //!      faceSun - если 1, отображает достаточно кривое лицо (глаза и рот)
    //!      middleLine - если 1, то рисует серединные линии 4 сторон (под 90, 180, -90, 0 градусов)
    //!      otherLine - если 1, то рисует побочные линии 4 сторон
    //!
    //! @usage @code
    //!          drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, true, false);//рисуем солнце
    //!          txSleep(500);
    //!          drawSun(75, 75, 25, MYNEWYELLOW, 2, MYNEWYELLOW, MYNEWYELLOW, 2, true, false, true);//также рисуем солнце, но уже немного анимированное
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawHouse(int x, int y, COLORREF houseColor, int siseLineHouse, COLORREF houseFillColor, COLORREF windowColor, int windowLineSise, COLORREF windowFillColor, COLORREF lineInWindowColor, int siseLineInWindow);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует красивый домик. Немного простенький, но для мультика сойдет)
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par x - отвечает за положение дома относительно X (центр дома - центр окна)
    //!      y - отвечает за положение дома относительно Y (центр дома - центр окна)
    //!      houseColor - цвет заливки обводки дома
    //!      siseLineHouse - размер линии обводки дома
    //!      houseFillColor - цвет заливки дома
    //!      windowColor - цвет заливки обводки окна
    //!      windowLineSise - размер обводки окна
    //!      windowFillColor - цвет заливки окна
    //!      lineInWindowColor - цвет заливки решеток на окне
    //!      siseLineInWindow - размер линий решеток на окне
    //!
    //! @usage @code
    //!          drawHouse(750, 500, TX_BLACK, 5, TX_RED, TX_BLUE, 5, TX_GREEN, TX_BLUE, 3);
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawNarutoAll(int z, int k, int L, COLORREF faceColor, COLORREF eyeColor, COLORREF beltColor, bool animation, COLORREF upHairColor, COLORREF middleHairColor, COLORREF downHairColor);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует НАРУТО. Рисует только голову! Очень много кода, и, наверное это самый лучший объект. Код собиранный по частям!
    //!
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par z - отвечает за положение головы относительно X (центр дома - центр окна)
    //!      k - отвечает за положение головы относительно Y (центр дома - центр окна)
    //!      L - размер волос
    //!      faceColor - цвет лица (заливка+контур)
    //!      eyeColor - цвет глаз (заливка+контур)
    //!      beltColor - цвет повязки (заливка+контур)
    //!      animation - true = анимация рта
    //!      upHairColor - цвет верхних волос
    //!      middleHairColor - цвет серединных волос
    //!      downHairColor - цвет нижних волос
    //!
    //! @usage @code
    //!          drawNarutoAll(950, 500, 5, TX_PINK, TX_CUAN, TX_BLUE, true, TX_RED, TX_ORANGE, TX_YELLOW);
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------

    void drawPacman(int x, int y, int headR, int eatR, int eyeR, COLORREF pacColor, COLORREF pacFillColor, COLORREF eyeColor, COLORREF eyeFillColor, COLORREF eatColor, COLORREF eatFillColor);

    //{----------------------------------------------------------------------------------------------------------------
    //! @brief Рисует Пакмена. Обычный Пакмен.
    //!
    //! @warning Здесь куча параметров, и все они обязательны! БУДЬТЕ ВНИМАТЕЛЬНЫ!! @nn
    //!
    //! @par x - отвечает за положение пакмена относительно X
    //!      y - отвечает за положение пакмена относительно Y
    //!      headR - радиус пакмена
    //!      eatR - радиус еды для пакмена
    //!      eyeR - радиус глаза
    //!      pacColor - цвет обводки Пакмена
    //!      pacFillColor - цвет заливки Пакмена
    //!      eyeColor - цвет обводки глаза
    //!      eyeFillColor - цвет заливки глаза
    //!      eatColor - цвет обводки еды
    //!      eatFillColor - цвет заливки еды
    //!
    //! @usage @code
    //!          drawPacman(750, 400, 192, 10, 25, TX_YELLOW, TX_YELLOW, TX_BLACK, TX_BLACK, TX_NULL, TX_NULL);
    //! @endcode
    //}----------------------------------------------------------------------------------------------------------------
    //! @}
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


    COLORREF MYNEWYELLOW = RGB (255, 255, 0);

    COLORREF MYNEWRED = RGB (255, 0, 0);
    COLORREF MYNEWORANGE = RGB (255, 165, 0);
    COLORREF MYNEWDARKGOLD = RGB (255, 187, 60);
    COLORREF MYNEWBLUE = RGB (0, 0, 128);
    COLORREF MYNEWGRAY = RGB (192, 192, 192);
    COLORREF MYNEWFACE = RGB (253, 228, 200);
    COLORREF MYNEWBLUE2 = RGB (0, 191, 255);
    COLORREF MYNEWBROWN = RGB (143, 60, 18);
    COLORREF MYNEWMOUNTH = RGB (250, 128, 114);

     //JOHNRAM
    void drawCloud(int x, int y){

    txSetColor(TX_WHITE);
    txSetFillColor(TX_WHITE);

    txCircle(x+15, y+90, 30);
    txCircle(x+45, y+90, 50);
    txCircle(x+100, y+90, 20);
    txCircle(x+35, y+120, 30);
    txCircle(x+75, y+120, 50);
    txCircle(x+130, y+120, 20);

    }


    //JOHNRAM
    void drawDerevo(int x, int y){
    txSetColor(MYNEWBROWN);
    txSetFillColor(MYNEWBROWN);
    txRectangle(x+160, y+160, x+120, y+120);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    POINT fstLeaves [3]{ {x+200, y+120}, {x+140, y+60}, {x+80, y+120} };
    txPolygon(fstLeaves, 3);
    POINT scndLeaves [3]{ {x+180, y+60}, {x+140, y+20}, {x+100, y+60} };
    txPolygon(scndLeaves, 3);
    POINT frdLeaves [3]{ {x+160, y+20}, {x+140, y}, {x+120, y+20} };
    txPolygon (frdLeaves, 3);

    txSetColor(MYNEWBROWN);
    txSetFillColor(MYNEWBROWN);//MYNEWBROWN
    txRectangle(x+80, y+180, x+40, y+140);
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    POINT fstLeaves2 [3]{ {x+120, y+140}, {x+60, y+80}, {x, y+140} };
    txPolygon(fstLeaves2, 3);
    POINT scndLeaves2 [3]{ {x+100, y+80}, {x+60, y+40}, {x+20, y+80} };
    txPolygon(scndLeaves2, 3);
    POINT frdLeaves2 [3]{ {x+80, y+40}, {x+60, y+20}, {x+40, y+40} };
    txPolygon(frdLeaves2, 3);

    }
    //JOHNRAM
    void drawStarLogo(int x, int y, double s){
    txSetColor(MYNEWYELLOW, 5);
    txSetFillColor(TX_NULL);
    txLine(x*s, (y+60)*s, (x+70)*s, (y+60)*s);
    txLine((x+70)*s, (y+60)*s, (x+50)*s, (y+40)*s);
    txArc((x+49)*s, (y+50)*s, (x+78)*s, (y+20)*s, 80, 120);
    txLine((x+65)*s, (y+20)*s, (x+180)*s, (y+20)*s);
    txLine((x+180)*s, (y+20)*s, (x+180)*s, (y+40)*s);
    txLine((x+180)*s, (y+40)*s, (x+150)*s, (y+40)*s);
    txLine((x+150)*s, (y+40)*s, (x+150)*s, (y+80)*s);
    txLine((x+150)*s, (y+80)*s, (x+130)*s, (y+80)*s);
    txLine((x+130)*s, (y+80)*s, (x+130)*s, (y+40)*s);
    txLine((x+130)*s, (y+40)*s, (x+80)*s, (y+40)*s);
    txLine((x+80)*s, (y+40)*s, (x+100)*s, (y+60)*s);
    txArc((x+103)*s, (y+55)*s, (x+70)*s, (y+80)*s, -80, 120);
    txLine((x+90)*s, (y+80)*s, (x)*s, (y+80)*s);
    txLine((x)*s, (y+80)*s, (x)*s, (y+60)*s);
    ////////
    txLine((x+170)*s, (y+80)*s, (x+200)*s, (y+20)*s);
    txLine((x+200)*s, (y+20)*s, (x+230)*s, (y+20)*s);
    txLine((x+230)*s, (y+20)*s, (x+260)*s, (y+80)*s);
    txLine((x+260)*s, (y+80)*s, (x+240)*s, (y+80)*s);
    txLine((x+240)*s, (y+80)*s, (x+230)*s, (y+70)*s);
    txLine((x+230)*s, (y+70)*s, (x+200)*s, (y+70)*s);
    txLine((x+200)*s, (y+70)*s, (x+190)*s, (y+80)*s);
    txLine((x+190)*s, (y+80)*s, (x+170)*s, (y+80)*s);

    txLine((x+205)*s, (y+60)*s, (x+215)*s, (y+30)*s);
    txLine((x+215)*s, (y+30)*s, (x+225)*s, (y+60)*s);
    txLine((x+225)*s, (y+60)*s, (x+205)*s, (y+60)*s);
    //////////
    txLine((x+270)*s, (y+80)*s, (x+270)*s, (y+20)*s);
    txLine((x+270)*s, (y+20)*s, (x+320)*s, (y+20)*s);
    txArc((x+340)*s, (y+60)*s, (x+300)*s, (y+20)*s, -90, 180);
    txLine((x+320)*s, (y+60)*s, (x+360)*s, (y+60)*s);
    txLine((x+360)*s, (y+60)*s, (x+360)*s, (y+80)*s);
    txLine((x+360)*s, (y+80)*s, (x+310)*s, (y+80)*s);
    txLine((x+310)*s, (y+80)*s, (x+290)*s, (y+60)*s);
    txLine((x+290)*s, (y+60)*s, (x+290)*s, (y+80)*s);
    txLine((x+290)*s, (y+80)*s, (x+270)*s, (y+80)*s);

    txLine((x+290)*s, (y+35)*s, (x+310)*s, (y+35)*s);
    txArc((x+306)*s, (y+45)*s, (x+315)*s, (y+35)*s, -90, 180);
    txLine((x+310)*s, (y+45)*s, (x+290)*s, (y+45)*s);
    txLine((x+290)*s, (y+45)*s, (x+290)*s, (y+35)*s);
    ////////
    ////////
    POINT w [13]{ {(x)*s, (y+100)*s}, {(x+20)*s, (y+160)*s}, {(x+40)*s, (y+160)*s}, {(x+50)*s, (y+130)*s}, {(x+60)*s, (y+160)*s}, {(x+80)*s, (y+160)*s}, {(x+100)*s, (y+100)*s}, {(x+80)*s, (y+100)*s}, {(x+70)*s, (y+125)*s}, {(x+60)*s, (y+100)*s},
                {(x+40)*s, (y+100)*s}, {(x+30)*s, (y+125)*s}, {(x+20)*s, (y+100)*s} };
    txPolygon(w, 13);
    /////
    POINT a [9]{ {(x+100)*s, (y+160)*s}, {(x+130)*s, (y+100)*s}, {(x+160)*s, (y+100)*s}, {(x+190)*s, (y+160)*s}, {(x+170)*s, (y+160)*s}, {(x+160)*s, (y+150)*s}, {(x+130)*s, (y+150)*s},
                {(x+120)*s, (y+160)*s}, {(x+100)*s, (y+160)*s}};
    txPolygon(a, 9);

    txLine((x+135)*s, (y+140)*s, (x+145)*s, (y+110)*s);
    txLine((x+145)*s, (y+110)*s, (x+155)*s, (y+140)*s);
    txLine((x+155)*s, (y+140)*s, (x+135)*s, (y+140)*s);
    ////
    txLine((x+200)*s, (y+160)*s, (x+200)*s, (y+100)*s);
    txLine((x+200)*s, (y+100)*s, (x+250)*s, (y+100)*s);
    txArc((x+270)*s, (y+140)*s, (x+230)*s, (y+100)*s, -90, 180);
    txLine((x+250)*s, (y+140)*s, (x+320)*s, (y+140)*s);
    txLine((x+320)*s, (y+140)*s, (x+300)*s, (y+120)*s);
    txArc((x+299)*s, (y+130)*s, (x+328)*s, (y+100)*s, 80, 120);
    txLine((x+310)*s, (y+100)*s, (x+360)*s, (y+100)*s);
    txLine((x+360)*s, (y+100)*s, (x+360)*s, (y+120)*s);
    txLine((x+360)*s, (y+120)*s, (x+330)*s, (y+120)*s);
    txLine((x+330)*s, (y+120)*s, (x+350)*s, (y+140)*s);
    txArc((x+353)*s, (y+135)*s, (x+320)*s, (y+160)*s, -80, 120);
    txLine((x+340)*s, (y+160)*s, (x+240)*s, (y+160)*s);
    txLine((x+240)*s, (y+160)*s, (x+220)*s, (y+140)*s);
    txLine((x+220)*s, (y+140)*s, (x+220)*s, (y+160)*s);
    txLine((x+220)*s, (y+160)*s, (x+200)*s, (y+160)*s);

    txLine((x+220)*s, (y+115)*s, (x+240)*s, (y+115)*s);
    txArc((x+236)*s, (y+115)*s, (x+245)*s, (y+125)*s, -90, 180);
    txLine((x+240)*s, (y+125)*s, (x+220)*s, (y+125)*s);
    txLine((x+220)*s, (y+125)*s, (x+220)*s, (y+115)*s);

    }
    //JOHNRAM
    void drawBall(int x, int y, int r, COLORREF ballColor, int ballOutSise, COLORREF ballFillColor, COLORREF lineColor, int lineSise, COLORREF middleBallColor, int midlleBallOutSise, COLORREF middleBallFillColor){

    txSetColor(ballColor, ballOutSise);
    txSetFillColor(ballFillColor);
    txCircle(x, y, r);//0 midlle (1106, 564) z = 120

    txSetColor(lineColor, lineSise);
    txLine(x-r+20, y, x, y-r+10);//1 2
    txLine(x, y-r+10, x+r-20, y);//2 3
    txLine(x+r-20, y, x, y+r-10);//3 4
    txLine(x, y+r-10, x-r+20, y);//4 1

    txSetColor(middleBallColor, midlleBallOutSise);
    txSetFillColor(middleBallFillColor);
    txCircle(x, y, (r/4));//5


    }
    //JOHNRAM
    void drawHuman(int x, int y, int headR, COLORREF headColor, int headOutSise, COLORREF headFillColor, COLORREF bodyColor, int bodySise, bool handHappy, bool face){

    txSetColor(headColor, headOutSise);
    txSetFillColor(headFillColor);
    txCircle(x, y-(headR*3), headR);//-1

    txSetColor(bodyColor, bodySise);

    txLine(x, y-(headR*2), x, y+80);//0 4

    if(handHappy == true){
    txLine(x-82, y-80, x, y);//1 3
    txLine(x+82, y-80, x, y);//2 3
    }else{

    txLine(x-82, y+80, x, y);//1 3
    txLine(x+82, y+80, x, y);

    }

    if(face == true){

        txLine(x+15, y-(headR*3)-15, x+15, y-(headR*3));
        txLine(x-15, y-(headR*3)-15, x-15, y-(headR*3));
        txLine(x-25, y-(headR*3)+15, x, y-(headR*3)+35);
        txLine(x+25, y-(headR*3)+15, x, y-(headR*3)+35);

    }

    txLine(x-41, y+203, x, y+80);//5 4
    txLine(x+41, y+203, x, y+80);//6 4

    }
    //JOHNRAM
    void drawSun(int x, int y, int r, COLORREF sunColor, int sunOutSise, COLORREF sunFillColor, COLORREF sunLineColor, int sunLineSise, bool faceSun, bool middleLine, bool otherLine){


    txSetColor(sunLineColor, sunLineSise);

    if(middleLine == true){
        txLine(x, y, x, y-100-r);
        txLine(x, y, x+100+r, y);
        txLine(x, y, x, y+100+r);
        txLine(x, y, x-100-r, y);
    }

    if(otherLine == true){
    txLine(x, y, x+100+r, y-100-r);
    txLine(x, y, x+100+r, y+100+r);
    txLine(x, y, x-100-r, y+100+r);
    txLine(x, y, x-100-r, y-100-r);
    }

    txSetColor(sunColor, sunOutSise);
    txSetFillColor(sunFillColor);
    txCircle(x, y, r);

    txSetColor(TX_RED);
    if(faceSun == true){
        txSetColor(TX_RED);
        txLine(x+10, y-10, x+10, y-5);
        txLine(x-10, y-10, x-10, y-5);
        txLine(x-10, y, x, y+10);
        txLine(x+10, y, x, y+10);
    }

    }
    //JOHNRAM
    void drawHouse(int x, int y, COLORREF houseColor, int siseLineHouse, COLORREF houseFillColor, COLORREF windowColor, int windowLineSise, COLORREF windowFillColor, COLORREF lineInWindowColor, int siseLineInWindow){
    txSetColor(houseColor, siseLineHouse);
    txSetFillColor(houseFillColor);
    POINT house[6]{ {x, y-196}, {x+147, y-88}, {x+147, y+96}, {x-149, y+96}, {x-149, y-88}, {x, y-196}};
    txPolygon (house, 6);
    txLine(x-149, y-88, x+147, y-88);//


    txSetColor(windowColor, windowLineSise);
    txSetFillColor(windowFillColor);

    txCircle(x, y, 52);//

    txSetColor(lineInWindowColor, siseLineInWindow);

    txLine(x, y+52, x, y-52);//7 9
    txLine(x+52, y, x-52, y);//10 8


    }
    //JOHNRAM
    void drawNarutoBelt(int z, int k, COLORREF beltColor){
    txSetColor(beltColor, 4);
    txSetFillColour(beltColor);
    /*txLine(z-141, k-20, z-141, k-60);//1c U+20
    txLine(z-141, k-20, z+128, k-20);//1c 7c
    txLine(z+128, k-20, z+128, k-60);//7c 16a+10
    txLine(z+128, k-60, z-141, k-60);*/

    POINT belt[5]{ {z-141, k-20}, {z-141, k-60}, {z+136, k-60}, {z+129, k-20}, {z-141, k-20}};
    txPolygon (belt, 5);

    POINT beltUp[4]{ {z-53, k-60}, {z-7, k-70}, {z+19, k-70}, {z+65, k-60} };
    txPolygon (beltUp, 4);
    /*txLine(z-53, k-60, z-7, k-70);//AD 4c              //k+70 >>> k+80
    txLine(z-7, k-70, z+19, k-70);//4c 5c
    txLine(z+19, k-70, z+65, k-60);//5c 24a*/


    POINT beltDown[4]{ {z-53, k-20}, {z-7, k-10}, {z+16, k-10}, {z+65, k-20} };
    txPolygon (beltDown, 4);
    /*txLine(z-53, k-20, z-7, k-10);//2c 8c
    txLine(z-7, k-10, z+16, k-10);//8c 9c
    txLine(z+16, k-10, z+65, k-20);//9c 6c*/

    //gray plate
    txSetColor(MYNEWGRAY, 1);
    txSetFillColor(MYNEWGRAY);
    txRectangle(z-53, k-20, z+65, k-60);


    //dark six point

    txSetColor(TX_BLACK, 1);
    txSetFillColor(TX_BLACK);
    int y = k-54;
    while(y <= k-23){
        txCircle(z+57, y, 4);
        y = y+14;
    }
    y = k-54;
    while(y <= k-23){
        txCircle(z-45, y, 4);
        y = y+14;
    }

    //symbol

    txSetColor(TX_BLACK, 4);
    txSetFillColor(MYNEWGRAY);
    txCircle(z+6, k-40, 15);

    txSetColor(MYNEWGRAY, 1);
    int Xx = z+13;
    y = k-24;
    while(y>=k-53){
      txLine(z+6, k-40, Xx, y);
      y --;
      Xx ++;
    }
    Xx = z+6;
    y = k-23;
    while(y>=k-53){
      txLine(z+6, k-40, Xx, y);
      y --;
      Xx ++;
    }
    txSetColor(MYNEWGRAY, 5);

    txLine(z+6, k-25, z+25, k-40);
    txLine(z+8, k-25, z+30, k-40);

    txSetColor(TX_BLACK, 4);
    txSetFillColor(MYNEWGRAY);
    txCircle(z+6, k-32, 7);

    txSetColor(MYNEWGRAY, 7);
    txLine(z+4, k-39, z, k-34);

    txSetColor(TX_BLACK, 4);
    txLine(z-9, k-40, z-18, k-26);
    txLine(z-18, k-26, z+6, k-26);
    txLine(z+19, k-49, z+26, k-55);
    }
    //JOHNRAM
    void drawNarutoFace(int z, int k, COLORREF faceColor, COLORREF eyeColor, bool animation){
    txSetColor(faceColor, 4);
    txSetFillColor(faceColor);

    POINT face[12]{ {z-181, k-80}, {z-146, k+80}, {z-135, k+110}, {z-123, k+140}, {z-54, k+180}, {z-31, k+190}, {z-8, k+180}, {z+61, k+140}, {z+73, k+110}, {z+84, k+80}, {z+114, k-80}, {z-181, k-80} };
    txPolygon (face, 12);

    //eyes
    txSetColor(TX_WHITE);
    txSetFillColor(TX_WHITE);
    txCircle(z-100, k+20, 20);
    txCircle(z+38, k+20, 20);

    txSetColor(eyeColor);
    txSetFillColor(eyeColor);
    txCircle(z-100, k+20, 12);
    txCircle(z+38, k+20, 12);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txCircle(z-100, k+20, 5);
    txCircle(z+38, k+20, 5);

    txSetColor(faceColor, 10);
    txLine(z-100, k, z-77, k+20);
    txLine(z+38, k, z+15, k+20);

    txSetColor(MYNEWBROWN, 4);
    txLine(z-123, k-10, z-100, k-10);//1e 2e
    txLine(z-100, k-10, z-54, k+10);//2e 3e
    txLine(z-8, k+10, z+38, k-10);//4e 5e
    txLine(z+38, k-10, z+61, k-10);//5e 6e

    //other face

    txSetColor(TX_BLACK, 2);
    txLine(z-31, k+50, z-42, k+70);//7e 8e
    txLine(z-42, k+70, z-31, k+70);//8e 9e

    txSetColor(TX_BLACK, 2);
    txLine(z-100, k+60, z-146, k+80);//1f 1d
    txLine(z-100, k+90, z-135, k+110);//2f 2d
    txLine(z-100, k+110, z-123, k+140);//3f 3d
    txLine(z+38, k+60, z+84, k+80);//4f 9d
    txLine(z+38, k+90, z+73, k+110);//5f 8d
    txLine(z+38, k+110, z+61, k+140);//6f 7d



    }
    //JOHNRAM
    void drawNarutoHair(int z, int k, int L, COLORREF upHairColor, COLORREF middleHairColor, COLORREF downHairColor){
     //hair

    //left hair

    txSetColor(downHairColor, L);
    txSetFillColour(downHairColor); //MYNEWDARK

    POINT fDownHair[3]{ {z-134, k-189}, {z-122, k-180}, {z-145, k-170} };
    txPolygon (fDownHair, 3);

    POINT sDownHair[4]{ {z-168, k-135}, {z-122, k-140}, {z-150, k-120}, {z-180, k-110} };
    txPolygon (sDownHair, 4);

    POINT tDownHair[4]{ {z-157, k-85}, {z-122, k-95}, {z-145, k-60}, {z-180, k-50} };
    txPolygon (tDownHair, 4);

    POINT foDownHair[4] { {z+131, k-70}, {z+108, k-110}, {z+131, k-102}, {z+142, k-80} };
    txPolygon (foDownHair, 4);

    POINT fifDownHair[4] { {z+143, k-122}, {z+101, k-158}, {z+154, k-152}, {z+165, k-138} };
    txPolygon (fifDownHair, 4);

    txSetColor(middleHairColor, L);
    txSetFillColour(middleHairColor); //MYNEWORANGE

    POINT hair[50]{ {z-99, k-200}, {z-157, k-190}, {z-134, k-189}, {z-122, k-180}, {z-145, k-170}, {z-191, k-130}, {z-168, k-135}, {z-122, k-140}, {z-150, k-120},   //9
    {z-191, k-100}, {z-214, k-70}, {z-157, k-85}, {z-122, k-95}, {z-145, k-60}, {z-168, k-20}, {z-138, k-40}, {z-111, k-60}, {z-88, k-70}, {z-85, k-60}, {z-83, k-20}, //11
    {z-82, k-10}, {z-79, k-20}, {z-61, k-60}, {z-53, k-70}, {z-53, k-64}, {z-7, k-74}, {z+19, k-74}, {z+65, k-64}, //8
    {z+60, k-80}, {z+65, k-60}, {z+85, k-40}, {z+96, k-20}, {z+94, k-60}, {z+92, k-80}, {z+120, k-60}, {z+131, k-50}, {z+154, k-40}, //9
    {z+131, k-70}, {z+108, k-110}, {z+131, k-102}, {z+177, k-100}, {z+143, k-122}, {z+101, k-158}, {z+154, k-152}, //7
    {z+188, k-150}, {z+154, k-160}, {z+108, k-182}, {z+131, k-190}, {z+85, k-200}, {z-99, k-200} };//6
    txPolygon (hair, 50);



    /*txLine(z-99, k-200, z-157, k-190); //AB         ////   CE, GJI, OSR
    txLine(z-157, k-190, z-134, k-189);//BC
    txLine(z-134, k-189, z-122, k-180); //CD
    txLine(z-122, k-180, z-145, k-170);//DE*/
    //txLine(z-134, k-188, z-145, k-170);//CE ///////
    /*txLine(z-145, k-170, z-191, k-130);//EF
    txLine(z-191, k-130, z-168, k-135);//FG
    txLine(z-168, k-135, z-122, k-140);//GH
    txLine(z-122, k-140, z-150, k-120);//HI*/
    //txLine(z-168, k-135, z-180, k-110);//GJ //
    //txLine(z-180, k-110, z-150, k-120);//JI //
    /*txLine(z-150, k-120, z-191, k-100);//IK
    txLine(z-191, k-100, z-214, k-70);//KL
    txLine(z-214, k-70, z-157, k-85);//LO
    txLine(z-157, k-85, z-122, k-95);//OP
    txLine(z-122, k-95, z-145, k-60);//PR*/
    //txLine(z-157, k-85, z-180, k-50);//OS //
    //txLine(z-180, k-50, z-145, k-60);//SR //
    /*txLine(z-145, k-60, z-168, k-20);//RT
    txLine(z-168, k-20, z-138, k-40);//TU
    txLine(z-138, k-40, z-111, k-60);//UV
    txLine(z-111, k-60, z-88, k-70);//VW
    txLine(z-88, k-70, z-85, k-60);//WX
    txLine(z-85, k-60, z-83, k-20);//XY
    txLine(z-83, k-20, z-82, k-10);//YZ
    txLine(z-82, k-10, z-79, k-20);//Z AA
    txLine(z-79, k-20, z-61, k-60);//AA AB
    txLine(z-61, k-60, z-53, k-70);//AB AC
    txLine(z-53, k-70, z-53, k-64);//AC AD

    txLine(z-53, k-64, z-7, k-74);//AD 4c              //k+70 >>> k+80
    txLine(z-7, k-74, z+19, k-74);//4c 5c
    txLine(z+19, k-74, z+65, k-64);//5c 24a*/

    //right    ///14a13a11a    8a9a6a

    /*txLine(z+60, k-80, z+65, k-64);//23a 24a

    txLine(z+65, k-60, z+60, k-80);//22a 23a
    txLine(z+85, k-40, z+65, k-60);//21a 22a
    txLine(z+96, k-20, z+85, k-40);//20a 21a
    txLine(z+94, k-60, z+96, k-20);//19a 20a
    txLine(z+92, k-80, z+94, k-60);//18a 19a
    txLine(z+120, k-60, z+92, k-80);//17a 18a
    txLine(z+131, k-50, z+120, k-60);//16a 17a
    txLine(z+154, k-40, z+131, k-50);//15a 16a
    txLine(z+131, k-70, z+154, k-40);//14a 15a*/
    //txLine(z+142, k-80, z+131, k-70);//13a 14a//
    //txLine(z+131, k-102, z+142, k-80);//11a 13a//
    /*txLine(z+108, k-110, z+131, k-70);//12a 14a
    txLine(z+131, k-102, z+108, k-110);//11a 12a
    txLine(z+177, k-100, z+131, k-102);//10a 11a
    txLine(z+143, k-122, z+177, k-100);//8a 10a*/
    //txLine(z+165, k-138, z+143, k-122);//9a 8a//
    //txLine(z+154, k-152, z+165, k-138);//6a 9a//
    /*txLine(z+101, k-158, z+143, k-122);//7a 8a
    txLine(z+154, k-152, z+101, k-158);//6a 7a
    txLine(z+188, k-150, z+154, k-152);//5a 6a
    txLine(z+154, k-160, z+188, k-150);//4a 5a
    txLine(z+108, k-182, z+154, k-160);//3a 4a
    txLine(z+131, k-190, z+108, k-182);//2a 3a
    txLine(z+85, k-200, z+131, k-190);//1a 2a
    txLine(z-99, k-200, z+85, k-200);//A 1a*/

    //hair light

    txSetColor(upHairColor, L); //MYNEWYELLOW
    txSetFillColour(upHairColor);

    /*txLine(z-99, k-200, z-157, k-190); //AB
    txLine(z-157, k-190, z-134, k-189);//BC
    txLine(z-134, k-189, z-122, k-180); //CD
    txLine(z-122, k-180, z-145, k-170);//DE
    txLine(z-145, k-170, z-191, k-130);//EF
    txLine(z-191, k-130, z-168, k-135);//FG*/
    POINT upHair[40]{ {z-99, k-200}, {z-157, k-190}, {z-134, k-189}, {z-122, k-180}, {z-145, k-170}, {z-191, k-130}, {z-168, k-135}, {z-122, k-140}, {z-150, k-120},  //9
                    {z-191, k-100}, {z-122, k-100}, {z-133, k-95}, {z-111, k-98}, {z-138, k-40}, {z-111, k-60}, {z-88, k-70}, {z-85, k-60}, {z-83, k-20}, //9
                    {z-82, k-10}, {z-79, k-20}, {z-61, k-60}, {z-53, k-70}, {z-53, k-64}, {z-7, k-74}, {z+19, k-74}, {z+65, k-64}, //8
                    {z+60, k-80}, {z+65, k-60}, {z+85, k-40}, //3
                    {z+85, k-102}, {z+108, k-110}, {z+93, k-122}, {z+101, k-120}, {z+78, k-143}, {z+101, k-158}, {z+154, k-160}, //7
                    {z+108, k-182}, {z+131, k-190}, {z+85, k-200}, {z-99, k-200} }; //4
    txPolygon(upHair, 40);

    /*txLine(z-168, k-135, z-122, k-140);//GH
    txLine(z-122, k-140, z-150, k-120);//HI
    txLine(z-150, k-120, z-191, k-100);//IK*/

    /*txLine(z-191, k-100, z-122, k-100);//KM
    txLine(z-122, k-100, z-133, k-95);//MN
    txLine(z-133, k-95, z-111, k-98);//NQ
    txLine(z-111, k-98, z-138, k-40);//QU
    txLine(z-138, k-40, z-111, k-60);//UV
    txLine(z-111, k-60, z-88, k-70);//VW
    txLine(z-88, k-70, z-85, k-60);//WX
    txLine(z-85, k-60, z-83, k-20);//XY
    txLine(z-83, k-20, z-82, k-10);//YZ
    txLine(z-82, k-10, z-79, k-20);//Z AA
    txLine(z-79, k-20, z-61, k-60);//AA AB
    txLine(z-61, k-60, z-53, k-70);//AB AC
    txLine(z-53, k-70, z-53, k-64);//AC AD
    txLine(z-53, k-64, z-7, k-74);//AD 4c
    txLine(z-7, k-74, z+19, k-74);//4c 5c
    txLine(z+19, k-74, z+65, k-64);//5c 24a

    txLine(z+60, k-80, z+65, k-64);//23a 24a
    txLine(z+65, k-60, z+60, k-80);//22a 23a
    txLine(z+85, k-40, z+65, k-60);//21a 22a*/

    /*txLine(z+154, k-160, z+188, k-150);//4a 5a
    txLine(z+108, k-182, z+154, k-160);//3a 4a
    txLine(z+131, k-190, z+108, k-182);//2a 3a
    txLine(z+85, k-200, z+131, k-190);//1a 2a
    txLine(z-99, k-200, z+85, k-200);//A 1a

    txLine(z+154, k-160, z+101, k-158);//4a 7a
    txLine(z+101, k-158, z+78, k-143);//7a 1b
    txLine(z+78, k-143, z+101, k-120);//1b 2b
    txLine(z+101, k-120, z+93, k-122);//2b 3b
    txLine(z+93, k-122, z+108, k-110);//3b 12a
    txLine(z+108, k-110, z+85, k-102);//12a 4b
    txLine(z+85, k-102, z+85, k-40);//4b 21a*/


    //fill gold hair

    //txSetColor(MYNEWDARKGOLD,10);

    /*txLine(462, 125, 545, 100);
    txLine(479, 100, 545, 100);
    txLine(462, 125, 530, 100);
    txLine(462, 125, 515, 100);
    txLine(462, 125, 500, 100);
    txLine(462, 125, 485, 100);
    txLine(503, 173, 550, 106);
    txLine(503, 173, 545, 118);
    txLine(503, 173, 540, 130);
    txLine(503, 173, 535, 142);
    txLine(503, 173, 530, 156);
    txLine(552, 100, 528, 158);
    txLine(754, 157, 754, 100);
    txLine(754, 157, 760, 172);
    txLine(760, 172, 754, 100);
    txLine(754, 100, 815, 156);
    txLine(754, 110, 815, 156);
    txLine(754, 100, 794, 126);
    txLine(794, 126, 770, 93);
    txLine(770, 93, 754, 100);
    txLine(770, 93, 760, 110);
    txLine(760, 110, 770, 105);
    txLine(840, 97, 765, 81);
    txLine(765, 81, 794, 126);
    txLine(765, 81, 795, 96);
    txLine(795, 96, 840, 97);
    txLine(748, 60, 840, 97);
    txLine(770, 93, 748, 60);
    txLine(770, 93, 765, 45);
    txLine(765, 45, 748, 60);
    txLine(765, 45, 757, 75);
    txLine(757, 75, 840, 97);
    txLine(765, 45, 807, 81);
    txLine(807, 81, 765, 58);
    txLine(818, 43, 765, 45);
    txLine(818, 43, 847, 48);*/


    //fill dark gold hair

    //txSetColor(MYNEWORANGE, 8);
    /*txLine(532, 14, 525, 27);
    txLine(532, 14, 529, 25);
    txLine(532, 14, 534, 23);
    txLine(532, 14, 539, 20);
    txLine(502, 68, 492, 84);
    txLine(502, 68, 497, 82);
    txLine(502, 68, 502, 80);
    txLine(502, 68, 507, 78);
    txLine(502, 68, 512, 76);
    txLine(502, 68, 517, 74);
    txLine(502, 68, 522, 72);
    txLine(502, 68, 527, 70);
    txLine(502, 68, 532, 68);
    txLine(502, 68, 537, 64);
    txLine(512, 118, 489, 148);
    txLine(512, 118, 494, 146);
    txLine(512, 118, 499, 144);
    txLine(512, 118, 504, 142);
    txLine(512, 118, 509, 140);
    txLine(512, 118, 514, 138);
    txLine(512, 118, 519, 135);
    txLine(512, 118, 522, 131);
    txLine(512, 118, 525, 127);
    txLine(512, 118, 528, 122);
    txLine(512, 118, 532, 117);
    txLine(512, 118, 535, 112);
    txLine(512, 118, 539, 107);
    txLine(807, 120, 800, 128);
    txLine(807, 120, 796, 123);
    txLine(807, 120, 777, 92);
    txLine(800, 128, 777, 92);
    txLine(797, 100, 777, 92);
    txLine(797, 100, 807, 120);
    txLine(819, 50, 780, 45);
    txLine(813, 75, 780, 45);
    txLine(813, 75, 819, 50);
    txLine(815, 73, 780, 45);
    txLine(817, 71, 780, 45);
    txLine(819, 69, 780, 45);
    txLine(821, 67, 780, 45);
    txLine(823, 65, 780, 45);
    txLine(825, 63, 780, 45);
    txLine(825, 61, 780, 45);
    txLine(824, 59, 780, 45);*/

    //light yellow up hair

    //txSetColor(MYNEWYELLOW, 5);
    /*int x = 572;
    while(x <= 742){
    txLine(x, 5, x, 118);
    x = x+2;
    }

    txSetColor(MYNEWYELLOW, 10);
    txLine(572, 5, 535, 8);
    txLine(535, 8, 555, 22);
    txLine(555, 22, 572, 5);
    txLine(572, 5, 552, 12);
    txLine(550, 60, 572, 5);
    txLine(561, 102, 572, 5);
    txLine(550, 100, 572, 5);
    txLine(555, 100, 572, 5);
    txLine(579, 125, 572, 5);
    txLine(614, 135, 572, 5);
    txLine(660, 130, 572, 5);
    txLine(683, 130, 572, 5);

    int y = 20;
    while(y<=57){
      txLine(490, 62, 550, y);
      y++;

    }
    txLine(490, 62, 565, 25);

    y = 60;
    while(y<=80){
        txLine(522, 80, 550, y);
        y++;
    }


    y = 80;
    x = 522;
    while(y <= 90){
        if (y >= 81 && y <= 83){
            x = 555;
        }
        if(y > 83){
            x = 580;
        }

        txLine(495, 90, x, y);
        y++;

    }

    txLine(568, 80, 582, 85);

    x = 558;
    while(x <= 605){
        txLine(535, 150, x, 100);
        x++;
    }

    x = 587;
    while(x <= 605){
        txLine(585, 170, x, 125);//zw
        x++;
    }

    y = 120;
    while(y <= 140){
        txLine(618, y, 725, y);
        y++;
    }

    txLine(564, 80, 584, 125);
    txLine(742, 118, 747, 147);
    txLine(736, 118, 747, 147);
    txLine(730, 118, 747, 147);
    txLine(742, 62, 747, 147);
    txLine(742, 62, 762, 85);
    txLine(748, 102, 762, 85);
    txLine(748, 102, 751, 71);
    txLine(742, 62, 770, 21);
    txLine(812, 37, 770, 21);
    txLine(812, 37, 765, 35);
    txLine(812, 37, 765, 30);
    txLine(791, 12, 770, 21);
    txLine(791, 12, 742, 8);
    txLine(770, 21, 742, 8);
    txLine(768, 32, 742, 8);
    txLine(746, 56, 742, 8);
    txLine(749, 50, 742, 8);
    txLine(754, 45, 742, 8);
    txLine(761, 38, 742, 8);*/
    }
    //JOHNRAM
    void drawNarutoMouth(int z, int k, bool animation){
    txSetColor(MYNEWMOUNTH, 4);
    txLine(z-72, k+120, z+17, k+120);//10e 11e
    txLine(z+26, k+110, z+20, k+120);//12e 11e

    txSetColor(MYNEWMOUNTH, 4);
    int x1 = z+20;
    int y1 = k+120;
    int x2 = z-76;
    int y2 = k+120;

    if(animation == true){
        txLine(z-72, k+120, z+26, k+110);
        txSetColor(TX_WHITE, 2);
        txSetFillColor(TX_WHITE);
        POINT ANIMA[3]{ {z-70, k+120}, {z+23, k+110}, {z+18, k+120} };
        txPolygon(ANIMA, 3);
        /*while(x1 <= z+34){

            txSetColor(MYNEWMOUNTH, 2);
            txLine(x2, y2, x1, y1);


            x1 = x1 + 1;
            y1 = y1 - 1;

            if(y1 < k+114){
                txSetColour(TX_WHITE, 1);
                x2 = z-66;
                y2 = k+118;
                x1 = x1 - 10;
                y1 = y1 + 5;

                txLine(x2, y2, x1, y1);

                x2 = z-76;

                y1 = y1 - 5;
                x1 = x1 + 10;

            }
            txLine()
            txSleep (150);//1ceñ = 1000

        }*/
    }

    }
    //JOHNRAM
    void drawNarutoAll(int z, int k, int L, COLORREF faceColor, COLORREF eyeColor, COLORREF beltColor, bool animation, COLORREF upHairColor, COLORREF middleHairColor, COLORREF downHairColor){
    drawNarutoFace(z+26, k, faceColor, eyeColor, animation);
    drawNarutoBelt(z, k, beltColor);
    drawNarutoHair(z, k, L, upHairColor, middleHairColor, downHairColor);
    drawNarutoMouth(z+26, k, animation);
    }
    //JOHNRAM
    void drawPacman(int x, int y, int headR, int eatR, int eyeR, COLORREF pacColor, COLORREF pacFillColor, COLORREF eyeColor, COLORREF eyeFillColor, COLORREF eatColor, COLORREF eatFillColor){


    txSetColour(pacColor, 10);
    txSetFillColor(pacFillColor);

    txCircle(x, y, headR);  //226,192,192

    txSetColor(TX_BLACK, 15);
    txSetFillColor(TX_BLACK);

    POINT MouthPac[3]{{x,y}, {x+195, y+98}, {x+195, y-122}};
    txPolygon (MouthPac, 3);

    //eye

    txSetColor(eyeColor);
    txSetFillColor(eyeFillColor);
    txCircle(x, y-107, eyeR);

    //meat
                        //226,192,192
    txSetColour(eatColor, 2);
    txSetFillColor(eatFillColor);
    txCircle(x+94, y-42, eatR);
    txCircle(x+24, y-2, eatR);
    txCircle(x+94, y+28, eatR);
    txCircle(x+164, y-2, eatR);
    txCircle(x+149, y+68, eatR);
    txCircle(x+149, y-82, eatR);
    }
    //JOHNRAM
    //JOHNRAM




