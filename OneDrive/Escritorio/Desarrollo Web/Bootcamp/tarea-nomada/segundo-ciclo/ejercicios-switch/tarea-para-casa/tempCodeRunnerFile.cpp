while ((anioCumple + 1) <= (year - 1)){
        bool esBisiesto = anioCumple%400 == 0 || (anioCumple%4 == 0 && anioCumple%100 != 0);
        diasPasados += (esBisiesto ? 366 : 365);
        anioCumple++;
        cout << diasPasados << endl;
    }