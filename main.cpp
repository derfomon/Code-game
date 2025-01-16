#include "raylib.h"
#include <cstdlib>
#include <iostream>

int keyright;
int keyleft;
int keyup;
int keyOt_1;
int keyOt__1;
int keyOt__10;
int keyOt_10;
int keyOt__001;
int keyOt_001;
int keyspeak;


// Функция для рисования персонажа
void DrawPers(int x, int y, int h, int l)
{
    Image pers = LoadImage("pers.png");
    Texture2D texture = LoadTextureFromImage(pers);
    UnloadImage(pers); // Освобождение памяти
    DrawTexture(texture, x, y, WHITE);
}

void menu3(bool& menu4, bool& menu3, bool& menu4Active)
{
    while (menu3)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("LEFT.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        // Перебираем все клавиши от A до Z
        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyright && key != keyup && key != keyOt_1 && key != keyOt__1 && key != keyOt__10 && key != keyOt_10 && key != keyOt__001) {
                    keyleft = key;  // Устанавливаем значение keyleft
                    menu3 = false;  // Выход из текущего меню
                    menu4 = true;   // Переход к следующему меню
                    menu4Active = true; // Активируем следующее меню
                    break; // Выход из цикла
                }
            }
        }

        EndDrawing();
    }
}

void menu4(bool& menu5, bool& menu4, bool& menu5Active)
{
    while (menu4)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("RIGHT.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyup && key != keyOt_1 && key != keyOt__1 && key != keyOt__10 && key != keyOt_10 && key != keyOt__001) {
                    keyright = key;
                    menu4 = false;
                    menu5 = true;
                    menu5Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu5(bool& menu6, bool& menu5, bool& menu6Active)
{
    while (menu5)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("UP.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyOt_1 && key != keyOt__1 && key != keyOt__10 && key != keyOt_10 && key != keyOt__001) {
                    keyup = key;
                    menu5 = false;
                    menu6 = true;
                    menu6Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu6(bool& menu7, bool& menu6, bool& menu7Active)
{
    while (menu6)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET1.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyup && key != keyOt__1 && key != keyOt_10 && key != keyOt__001) {
                    keyOt_1 = key;
                    menu6 = false;
                    menu7 = true;
                    menu7Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu7(bool& menu8, bool& menu7, bool& menu8Active)
{
    while (menu7)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET-1.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyup && key != keyOt_1 && key != keyOt__10 && key != keyOt_10 && key != keyOt__001) {
                    keyOt__1 = key;
                    menu7 = false;
                    menu8 = true;
                    menu8Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu8(bool& menu9, bool& menu8, bool& menu9Active)
{
    while (menu8)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET-10.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyup && key != keyOt_1 && key != keyOt__1 && key != keyOt_10 && key != keyOt__001) {
                    keyOt__10 = key;
                    menu8 = false;
                    menu9 = true;
                    menu9Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu9(bool& menu10, bool& menu9, bool& menu10Active)
{
    while (menu9)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET10.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyup && key != keyOt_1 && key != keyOt__1 && key != keyOt__10 && key != keyOt_001) {
                    keyOt_10 = key;
                    menu9 = false;
                    menu10 = true;
                    menu10Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu10(bool& menu11, bool& menu10, bool& menu11Active)
{
    while (menu10)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET-001.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key)) {
                if (key != keyleft && key != keyright && key != keyup && key != keyOt_1 && key != keyOt__1 && key != keyOt_10 && key != keyOt_001 && key != keyOt__10) {
                    keyOt__001 = key;
                    menu10 = false;
                    menu11 = true;
                    menu11Active = true;
                    break;
                }
            }
        }

        EndDrawing();
    }
}

void menu11(bool& menu12, bool& menu11, bool& menu12Active)
{
    while (menu11)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("OTVET001.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        // Перебираем все клавиши от A до Z
        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key) &&
                keyOt_001 != key &&
                keyOt__001 != key &&
                keyOt_10 != key &&
                keyOt__10 != key &&
                keyOt__1 != key &&
                keyOt_1 != key &&
                keyup != key &&
                keyright != key &&
                keyleft != key)
            {
                keyOt_001 = key; // Устанавливаем новую клавишу
                menu11 = false; // Закрываем текущее меню
                menu12 = true; // Переход к menu12
                menu12Active = true; // Активируем menu12
                break; // Выход из цикла, если клавиша нажата
            }
        }

        EndDrawing();
    }
}

void menu12(bool& menu1, bool& menu12, bool& menu1Active)
{
    while (menu12)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        Image PIF = LoadImage("SPEAK.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 0, 90, WHITE);

        // Перебираем все клавиши от A до Z
        for (int key = KEY_A; key <= KEY_Z; key++)
        {
            if (IsKeyPressed(key))
            {
                // Проверка, что клавиша не совпадает с уже установленными
                if (key != keyspeak &&
                    key != keyOt__001 &&
                    key != keyOt_10 &&
                    key != keyOt__10 &&
                    key != keyOt_1 &&
                    key != keyOt__1 &&
                    key != keyup &&
                    key != keyright &&
                    key != keyleft &&
                    key != keyOt_001 && // Добавляем проверку на dublikat
                    key != keyOt__001) // Проверяем, чтобы не совпадала с keyOt__001
                {
                    keyspeak = key; // Устанавливаем новую клавишу
                    menu12 = false; // Закрываем текущее меню
                    menu1 = true; // Переход к menu1
                    menu1Active = true; // Активируем menu1
                    break; // Выход из цикла, если клавиша нажата
                }
            }
        }

        EndDrawing();
    }
}

void menu(bool& menu1, bool& menu, bool& menu1Active)
{
    while (menu)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        std::string textToDisplay = "Press " + std::string(1, static_cast<char>(keyspeak)) + " to start";

        // Отрисовка текста
        DrawText(textToDisplay.c_str(), 175, 250, 50, DARKGRAY);
        if (IsKeyPressed(keyspeak))
        {
            menu = false;
            menu1 = true;
            menu1Active = true;
        }
        EndDrawing();
    }
}

void menu1(bool& menu1, bool& menu, bool& level2, bool& level3, bool& level4, bool& level5, bool& level6, bool& level7, bool& level8, bool& level9, bool& level10, bool& level11) {
    int level = 0;         // Текущий выбранный уровень на странице
    int _level_ = 0;       // Текущая строка уровней на странице
    int page = 0;          // Текущая страница
    const int maxPages = 2; // Общее количество страниц (2 страницы по 5 уровней)

    while (menu1) {
        BeginDrawing();
        ClearBackground(WHITE);

        Color activeColor = RED;   // Цвет активного уровня
        Color inactiveColor = BLACK; // Цвет неактивного уровня

        // Рисуем уровни в зависимости от текущей страницы
        for (int i = 0; i < 3; i++) { // Колонки (3 уровня в строке)
            for (int j = 0; j < 2; j++) { // Строки (2 строки уровней)
                int x = 50 + (i * 266); // Смещение по X
                int y = 100 + (j * 200); // Смещение по Y
                DrawRectangle(x, y, 166, 100, WHITE);

                // Подписываем уровень под квадратом
                int levelNumber = page * 6 + (j * 3) + i; // Номер уровня
                if (levelNumber < 10) { // Ограничение до 10 уровней
                    DrawText(TextFormat("%i", levelNumber + 1), x + 70, y + 110, 20, BLACK); // Подпись уровня под квадратом

                    // Выделение текущего уровня красным контуром
                    if (level == i && _level_ == j)
                        DrawRectangleLines(x, y, 166, 100, activeColor);
                    else
                        DrawRectangleLines(x, y, 166, 100, inactiveColor);
                }
            }
        }

        // Отображение номера текущей страницы
        DrawText(TextFormat("Page %i/%i", page + 1, maxPages), 330, 50, 20, BLACK);
        DrawText(" < Select >", 250, 500, 50, BLACK);

        // Отображение клавиш в виде символов
        DrawText(TextFormat("%c", keyOt_001), 275, 550, 20, BLACK); 
        DrawText(TextFormat("%c", keyOt__001), 500, 550, 20, BLACK); 

        // Обработка нажатий клавиш
        if (IsKeyPressed(KEY_RIGHT)) // Перемещение вправо
        {
            level++;
            if (level > 2) level = 0; // Циклический переход в пределах строки
        }
        if (IsKeyPressed(KEY_LEFT)) // Перемещение влево
        {
            level--;
            if (level < 0) level = 2; // Циклический переход в пределах строки
        }
        if (IsKeyPressed(KEY_UP)) // Перемещение вверх
        {
            _level_--;
            if (_level_ < 0) _level_ = 1; // Циклический переход между строками
        }
        if (IsKeyPressed(KEY_DOWN)) // Перемещение вниз
        {
            _level_++;
            if (_level_ > 1) _level_ = 0; // Циклический переход между строками
        }

        // Переключение страниц
        if (IsKeyPressed(keyOt__001)) // Следующая страница
        {
            page++;
            if (page >= maxPages) page = 0; // Циклический переход на первую страницу
        }
        if (IsKeyPressed(keyOt_001)) // Предыдущая страница
        {
            page--;
            if (page < 0) page = maxPages - 1; // Циклический переход на последнюю страницу
        }

        // Переход в уровни
        if (IsKeyPressed(KEY_ENTER) && level == 0 && _level_ == 0 && page == 0) {
            menu1 = false; // Закрываем меню
            level2 = true; // Переходим в level2
        }
        if (IsKeyPressed(KEY_ENTER) && level == 1 && _level_ == 0 && page == 0) {
            menu1 = false; // Закрываем меню
            level3 = true; // Переходим в level3
        }
        if (IsKeyPressed(KEY_ENTER) && level == 2 && _level_ == 0 && page == 0) {
            menu1 = false; // Закрываем меню
            level4 = true; // Переходим в level4
        }
        if (IsKeyPressed(KEY_ENTER) && level == 0 && _level_ == 1 && page == 0) {
            menu1 = false; // Закрываем меню
            level5 = true; // Переходим в level5
        }
        if (IsKeyPressed(KEY_ENTER) && level == 1 && _level_ == 1 && page == 0) {
            menu1 = false; // Закрываем меню
            level6 = true; // Переходим в level6
        }
        if (IsKeyPressed(KEY_ENTER) && level == 2 && _level_ == 1 && page == 0) {
            menu1 = false; // Закрываем меню
            level7 = true; // Переходим в level7
        }
        if (IsKeyPressed(KEY_ENTER) && level == 0 && _level_ == 0 && page == 1) {
            menu1 = false; // Закрываем меню
            level8 = true; // Переходим в level8
        }
        if (IsKeyPressed(KEY_ENTER) && level == 1 && _level_ == 0 && page == 1) {
            menu1 = false; // Закрываем меню
            level9 = true; // Переходим в level9
        }
        if (IsKeyPressed(KEY_ENTER) && level == 2 && _level_ == 0 && page == 1) {
            menu1 = false; // Закрываем меню
            level10 = true; // Переходим в level10
        }
        if (IsKeyPressed(KEY_ENTER) && level == 0 && _level_ == 1 && page == 1) {
            menu1 = false; // Закрываем меню
            level11 = true; // Переходим в level11
        }

        EndDrawing();
    }
}
/*void level1(int& Otvet, bool& level1, bool& level2)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;

    while (level1)
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);

        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 1:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        DrawLine(100, 400, 250, 150, BLACK);
        DrawLine(250, 150, 500, 400, BLACK);
        DrawLine(100, 400, 500, 400, BLACK);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Otvet: %i", Otvet), 525, 250, 20, DARKGRAY);
        DrawText("Please press E to confirm", 525, 225, 20, DARKGRAY);

        if (IsKeyPressed(keyspeak) && Otvet == 0)
        {
            level1 = false; // Переход на следующий уровень
            level2 = true;
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {
            DrawText("A=-1", 60, 495, 20, DARKGRAY);
            DrawText("D=+1", 140, 495, 20, DARKGRAY);

            if (IsKeyPressed(keyOt_001)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}
*/

void level2(bool& level2, bool& level3)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;

    // Загрузка текстуры
    
    int textState = 0; // Состояние текста

    while (level2) // Второй уровень
    {
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;
        Image PIF = LoadImage("Bust Portrait Of Pyrason Of Cyrene In Profile.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 100, 125, WHITE);

        Image dialogImage = LoadImage("dialog_1.png");
        Texture2D dialogTexture = LoadTextureFromImage(dialogImage);
        UnloadImage(dialogImage); // Освобождение памяти после загрузки текстуры

        Image dialogImage_2 = LoadImage("dialog_2.png");
        Texture2D dialogTexture_2 = LoadTextureFromImage(dialogImage_2);
        UnloadImage(dialogImage_2); // Освобождение памяти после загрузки текстуры

        if (IsKeyPressed(keyup) && !isJumping)
        {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        if (isJumping)
        {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight)
            {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText(TextFormat("Speak - %c", keyspeak), 175, 350, 20, BLACK);

        // Отображение текста
        if (textState == 0)
            DrawTexture(dialogTexture, 300, 125, WHITE);
        if (textState == 1)
            DrawTexture(dialogTexture_2, 300, 125, WHITE);




        EndDrawing();

        // Обработка нажатия клавиши E
        if (IsKeyPressed(keyspeak))
        {
            textState++;
            if (textState > 1)
            {
                level2 = false; // Переход на следующий уровень
                level3 = true;
            }
        }
       // UnloadTexture(dialogTexture);
    }
}

void level3(int& Otvet, bool& level3, bool& level4)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;
    while (level3)
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);

        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 1:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        Image t = LoadImage("task_1.png");
        Texture2D task_1 = LoadTextureFromImage(t);
        UnloadImage(t); // Освобождение памяти
        DrawTexture(task_1, 50, 125, WHITE);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Answer: %i", Otvet), 70, 450, 20, DARKGRAY);


        if (IsKeyPressed(keyspeak) && Otvet == 13)
        {
            level3 = false; // Переход на следующий уровень
            level4 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && Otvet != 13)
        {
            hint++;
        }
        if (hint > 2)
        {
                Image h = LoadImage("hint_1.png");
                Texture2D hint_1 = LoadTextureFromImage(h);
                UnloadImage(h); // Освобождение памяти
                DrawTexture(hint_1, 500, 325, WHITE);
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {


            if (IsKeyPressed(keyOt_1)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                Otvet += 10;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                Otvet -= 10;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}

void level4(int& Otvet, bool& level4, bool& level5) {
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;
    while (level4)
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);

        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 2:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        Image t = LoadImage("task_2.png");
        Texture2D task_2 = LoadTextureFromImage(t);
        UnloadImage(t); // Освобождение памяти
        DrawTexture(task_2, 50, 125, WHITE);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Answer: %i", Otvet), 70, 450, 20, DARKGRAY);


        if (IsKeyPressed(keyspeak) && Otvet == 47)
        {
            level4 = false; // Переход на следующий уровень
            level5 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && Otvet != 47)
        {
            hint++;
        }
        if (hint > 3)
        {
            Image h = LoadImage("hint_2.png");
            Texture2D hint_2 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_2, 500, 325, WHITE);
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {


            if (IsKeyPressed(keyOt_1)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                Otvet += 10;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                Otvet -= 10;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}

void level5(bool& level5, bool& level6)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;

    // Загрузка текстуры

    int textState = 0; // Состояние текста

    while (level5) // Второй уровень
    {
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;
        Image PIF = LoadImage("Bust Portrait Of Pyrason Of Cyrene In Profile.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 100, 125, WHITE);

        Image dialogImage = LoadImage("dialog_3.png");
        Texture2D dialogTexture = LoadTextureFromImage(dialogImage);
        UnloadImage(dialogImage); // Освобождение памяти после загрузки текстуры

        if (IsKeyPressed(keyup) && !isJumping)
        {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        if (isJumping)
        {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight)
            {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText(TextFormat("Speak - %c", keyspeak), 100, 350, 20, BLACK);


        // Отображение текста
        if (textState == 0)
            DrawTexture(dialogTexture, 300, 125, WHITE);

        EndDrawing();

        // Обработка нажатия клавиши E
        if (IsKeyPressed(keyspeak))
        {
            textState++;
            if (textState > 0)
            {
                level5 = false; // Переход на следующий уровень
                level6 = true;
            }
        }
        // UnloadTexture(dialogTexture);
    }
}

void level6(int& Otvet, bool& level6, bool& level7) {
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;
    while (level6)
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;


        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 3:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        Image t = LoadImage("task_3.png");
        Texture2D task_3 = LoadTextureFromImage(t);
        UnloadImage(t); // Освобождение памяти
        DrawTexture(task_3, 50, 125, WHITE);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Answer: %i", Otvet), 70, 450, 20, DARKGRAY);
        DrawText(TextFormat("life:"), 600, 50, 20, DARKGRAY);
        DrawCircle(660, 65, 15, RED);
        DrawCircle(700, 65, 15, RED);
        DrawCircle(740, 65, 15, RED);

        if (IsKeyPressed(keyspeak) && Otvet == 8)
        {
            level6 = false; // Переход на следующий уровень
            level7 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && hint > 3)
        {
            level6 = false; // Переход на следующий уровень
            level7 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && Otvet != 8)
        {
            hint++;
        }

        if (hint > 3 && Otvet != 8)
        {
            DrawRectangle(0, 0, 800, 400,WHITE);
            Image h = LoadImage("hint_3.png");
            Texture2D hint_3 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_3, 0, 0, WHITE);
            DrawText(TextFormat("Continue -  %c",keyspeak), 570, 450, 20, DARKGRAY);

            DrawText(TextFormat("You Lose"), 370, 450, 20, DARKGRAY);
        }
        if (hint == 2)
        {
            DrawCircle(740, 65, 13, WHITE);
        }
        if (hint == 3)
        {
            DrawCircle(740, 65, 13, WHITE);
            DrawCircle(700, 65, 13, WHITE);
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {


            if (IsKeyPressed(keyOt_1)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                Otvet += 10;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                Otvet -= 10;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}

void level7(bool& level7, bool& level8)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;

    // Загрузка текстуры

    int textState = 0; // Состояние текста

    while (level7) // Второй уровень
    {
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;
        Image PIF = LoadImage("Bust Portrait Of Pyrason Of Cyrene In Profile.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 100, 125, WHITE);

        Image dialogImage = LoadImage("dialog_5.png");
        Texture2D dialogTexture = LoadTextureFromImage(dialogImage);
        UnloadImage(dialogImage); // Освобождение памяти после загрузки текстуры

        Image dImage = LoadImage("dialog_4.png");
        Texture2D dTexture = LoadTextureFromImage(dImage);
        UnloadImage(dImage); // Освобождение памяти после загрузки текстуры

        if (IsKeyPressed(keyup) && !isJumping)
        {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        if (isJumping)
        {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight)
            {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText(TextFormat("Speak - %c", keyspeak), 100, 350, 20, DARKGRAY);

        // Отображение текста
        if (textState == 0)
            DrawTexture(dialogTexture, 300, 125, WHITE);
        if (textState == 1)
            DrawTexture(dTexture, 300, 125, WHITE);

        EndDrawing();

        // Обработка нажатия клавиши E
        if (IsKeyPressed(keyspeak))
        {
            textState++;
            if (textState > 1)
            {
                level7 = false; // Переход на следующий уровень
                level8 = true;
            }
        }
        // UnloadTexture(dialogTexture);
    }
}

void level8(int& Otvet, bool& level8, bool& level9) {
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;
    while (level8) // Изменено с level6 на level8
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 4:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        Image t = LoadImage("task_4.png");
        Texture2D task_4 = LoadTextureFromImage(t);
        UnloadImage(t); // Освобождение памяти
        DrawTexture(task_4, 50, 125, WHITE);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Answer: %i", Otvet), 70, 450, 20, DARKGRAY);
        DrawText(TextFormat("life:"), 600, 50, 20, DARKGRAY);
        DrawCircle(660, 65, 15, RED);
        DrawCircle(700, 65, 15, RED);
        DrawCircle(740, 65, 15, RED);

        if (IsKeyPressed(keyspeak) && Otvet == 1)
        {
            level8 = false; // Переход на следующий уровень
            level9 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && hint == 4)
        {
            DrawRectangle(0, 0, 800, 400, WHITE);
            Image h = LoadImage("hint_4.png");
            Texture2D hint_4 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_4, 0, 0, WHITE);
            DrawText(TextFormat("Continue - %c",keyspeak), 570, 450, 20, DARKGRAY);
            DrawText(TextFormat("You Lose"), 370, 450, 20, DARKGRAY);
            level8 = false; // Переход на следующий уровень
            level9 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && Otvet != 1)
        {
            hint++;
        }

        if (hint == 4)
        {
            DrawRectangle(0, 0, 800, 400, WHITE);
            Image h = LoadImage("hint_4.png");
            Texture2D hint_4 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_4, 0, 0, WHITE);
            DrawText(TextFormat("Continue - %c", keyspeak), 570, 450, 20, DARKGRAY);
            DrawText(TextFormat("You Lose"), 370, 450, 20, DARKGRAY);
        }
        if (hint == 2)
        {
            DrawCircle(740, 65, 13, WHITE);
        }
        if (hint == 3)
        {
            DrawCircle(740, 65, 13, WHITE);
            DrawCircle(700, 65, 13, WHITE);

        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {


            if (IsKeyPressed(keyOt_1)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                Otvet += 10;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                Otvet -= 10;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}

void level9(bool& level9, bool& level10)
{
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;

    // Загрузка текстуры

    int textState = 0; // Состояние текста

    while (level9) // Девятый уровень
    {
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;
        Image PIF = LoadImage("Bust Portrait Of Pyrason Of Cyrene In Profile.png");
        Texture2D da = LoadTextureFromImage(PIF);
        UnloadImage(PIF); // Освобождение памяти
        DrawTexture(da, 100, 125, WHITE);

        Image dialogImage = LoadImage("dialog_6.png");
        Texture2D dialogTexture = LoadTextureFromImage(dialogImage);
        UnloadImage(dialogImage); // Освобождение памяти после загрузки текстуры

        Image dImage = LoadImage("dialog_7.png");
        Texture2D dTexture = LoadTextureFromImage(dImage);
        UnloadImage(dImage); // Освобождение памяти после загрузки текстуры

        if (IsKeyPressed(keyup) && !isJumping)
        {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        if (isJumping)
        {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight)
            {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText(TextFormat("Speak - %c",keyspeak), 100, 350, 20, DARKGRAY);

        // Отображение текста
        if (textState == 0)
            DrawTexture(dialogTexture, 300, 125, WHITE);
        if (textState == 1)
            DrawTexture(dTexture, 300, 125, WHITE);

        EndDrawing();

        // Обработка нажатия клавиши E
        if (IsKeyPressed(keyspeak))
        {
            textState++;
            if (textState > 1)
            {
                level9 = false; // Переход на следующий уровень
                level10 = true;
            }
        }
        // UnloadTexture(dialogTexture);
    }
}

void level10(int& Otvet, bool& level10, bool& level11) {
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;
    while (level10) // Изменено с level8 на level10
    {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("Task 5:", 10, 10, 20, DARKGRAY);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        Image t = LoadImage("task_5.png");
        Texture2D task_5 = LoadTextureFromImage(t);
        UnloadImage(t); // Освобождение памяти
        DrawTexture(task_5, 50, 125, WHITE);
        DrawCircle(102.5, 575, 10, RED);
        DrawText(TextFormat("Answer: %i", Otvet), 70, 450, 20, DARKGRAY);
        DrawText(TextFormat("life:"), 600, 50, 20, DARKGRAY);
        DrawCircle(660, 65, 15, RED);
        DrawCircle(700, 65, 15, RED);
        DrawCircle(740, 65, 15, RED);

        if (IsKeyPressed(keyspeak) && Otvet == 1)
        {
            level10 = false; // Переход на следующий уровень
            level11 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && hint == 4)
        {
            DrawRectangle(0, 0, 800, 400, WHITE);
            Image h = LoadImage("hint_5.png");
            Texture2D hint_5 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_5, 0, 0, WHITE);
            DrawText(TextFormat("Continue - %c",keyspeak), 570, 450, 20, DARKGRAY);
            DrawText(TextFormat("You Lose"), 370, 450, 20, DARKGRAY);
            level10 = false; // Переход на следующий уровень
            level11 = true;
            Otvet = 0;
        }

        if (IsKeyPressed(keyspeak) && Otvet != 1)
        {
            hint++;
        }

        if (hint == 4)
        {
            DrawRectangle(0, 0, 800, 400, WHITE);
            Image h = LoadImage("hint_5.png");
            Texture2D hint_5 = LoadTextureFromImage(h);
            UnloadImage(h); // Освобождение памяти
            DrawTexture(hint_5, 0, 0, WHITE);
            DrawText(TextFormat("Continue - %c", keyspeak), 570, 450, 20, DARKGRAY);
            DrawText(TextFormat("You Lose"), 370, 450, 20, DARKGRAY);
        }
        if (hint == 2)
        {
            DrawCircle(740, 65, 13, WHITE);
        }
        if (hint == 3)
        {
            DrawCircle(740, 65, 13, WHITE);
            DrawCircle(700, 65, 13, WHITE);
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {


            if (IsKeyPressed(keyOt_1)) {
                Otvet += 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                Otvet -= 1;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                Otvet += 10;
                std::cout << Otvet << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                Otvet -= 10;
                std::cout << Otvet << std::endl;
            }
        }

        EndDrawing();
    }
}

void level11(float& OtvetF, float& OtvetF2, float& OtvetF3, bool& level11, bool& level12, bool& menu) {
    int playerX = 10, playerY = 550;
    int speedPlayer = 5;
    int playrHight = 50, playrWeight = 50;
    bool isJumping = false;
    float gravity = 1.0f;
    float jumpSpeed = 10.0f;
    float velocityY = 0;
    int ButtonHeight = 15;
    int ButtonY = 585;
    int hint = 0;

    while (level11) {
        // Движение игрока
        if (IsKeyDown(keyleft) && playerX > 0) playerX -= speedPlayer;
        if (IsKeyDown(keyright) && playerX < 750) playerX += speedPlayer;

        // Прыжок
        if (IsKeyPressed(keyup) && !isJumping) {
            isJumping = true;
            velocityY = -jumpSpeed;
        }

        // Обработка физики прыжка
        if (isJumping) {
            playerY += velocityY;
            velocityY += gravity;
            if (playerY >= GetScreenHeight() - playrHight) {
                playerY = GetScreenHeight() - playrHight;
                isJumping = false;
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        // Рисование персонажа
        DrawPers(playerX, playerY, playrWeight, playrHight);
        DrawText("MINI_BOSS", 400, 50, 30, RED);
        DrawCircle(102.5, 575, 10, RED);
        DrawRectangle(100, ButtonY, 5, ButtonHeight, BLACK);
        DrawCircle(172.5 + 70, 575, 10, GREEN);
        DrawRectangle(170 + 70, ButtonY, 5, ButtonHeight, BLACK);
        Image B = LoadImage("MINI_BOSS_1.png");
        Texture2D MB = LoadTextureFromImage(B);
        UnloadImage(B); // Освобождение памяти
        DrawTexture(MB, 50, 125, WHITE);
        DrawText(TextFormat("AB: %.2f", OtvetF), 70, 425, 20, DARKGRAY); // Изменено на %.2f для отображения дробных значений
        DrawText(TextFormat("B: %.2f", OtvetF2), 140 + 70, 425, 20, DARKGRAY); // Изменено на %.2f для отображения дробных значений
        DrawText(TextFormat("life:"), 600, 50, 20, DARKGRAY);
        DrawCircle(660, 65, 15, RED);
        DrawCircle(700, 65, 15, RED);
        DrawCircle(740, 65, 15, RED);

        if (IsKeyPressed(keyspeak) && OtvetF == 7.21f && OtvetF2 == 0.65f) {
            level11 = false; // Переход на следующий уровень
            menu = true;
        }

        if (IsKeyPressed(keyspeak) && hint == 4) {
            DrawRectangle(0, 0, 800, 600, WHITE);
            DrawText(TextFormat("You Lose"), 250, 300, 50, DARKGRAY);
            level11 = false; // Переход на следующий уровень
            menu = true;
            OtvetF = 0.0f;
        }

        if (IsKeyPressed(keyspeak) && OtvetF != 1.0f) {
            hint++;
        }

        if (hint == 4) {
            DrawRectangle(0, 0, 800, 600, WHITE);
            DrawText(TextFormat("You    Lose"), 250, 250, 50, DARKGRAY);
        }
        if (hint == 2) {
            DrawCircle(740, 65, 13, WHITE);
        }
        if (hint == 3) {
            DrawCircle(740, 65, 13, WHITE);
            DrawCircle(700, 65, 13, WHITE);
        }

        if (playerX > 51 && playerX < 111 && playerY + 49 >= 585) {

            if (IsKeyPressed(keyOt_1)) {
                OtvetF += 0.1f; // Изменено на дробные значения
                std::cout << OtvetF << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                OtvetF -= 0.1f; // Изменено на дробные значения
                std::cout << OtvetF << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                OtvetF += 1.0f; // Изменено на дробные значения
                std::cout << OtvetF << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                OtvetF -= 1.0f; // Изменено на дробные значения
                std::cout << OtvetF << std::endl;
            }

            // Новые действия для клавиш S и X
            if (IsKeyPressed(keyOt_001)) {
                OtvetF += 0.01f; // Увеличение на 0.01
                std::cout << OtvetF << std::endl;
            }

            if (IsKeyPressed(keyOt__001)) {
                OtvetF -= 0.01f; // Уменьшение на 0.01
                std::cout << OtvetF << std::endl;
            }
        }
        if (playerX > 121+70 && playerX < 181 + 70 && playerY + 119 + 70 >= 655 + 70) {

            if (IsKeyPressed(keyOt_1)) {
                OtvetF2 += 0.1f; // Изменено на дробные значения
                std::cout << OtvetF2 << std::endl;
            }

            if (IsKeyPressed(keyOt__1)) {
                OtvetF2 -= 0.1f; // Изменено на дробные значения
                std::cout << OtvetF2 << std::endl;
            }

            if (IsKeyPressed(keyOt_10)) {
                OtvetF2 += 1.0f; // Изменено на дробные значения
                std::cout << OtvetF2 << std::endl;
            }

            if (IsKeyPressed(keyOt__10)) {
                OtvetF2 -= 1.0f; // Изменено на дробные значения
                std::cout << OtvetF2 << std::endl;
            }

            // Новые действия для клавиш S и X
            if (IsKeyPressed(keyOt_001)) {
                OtvetF2 += 0.01f; // Увеличение на 0.01
                std::cout << OtvetF2 << std::endl;
            }

            if (IsKeyPressed(keyOt__001)) {
                OtvetF2 -= 0.01f; // Уменьшение на 0.01
                std::cout << OtvetF2 << std::endl;
            }
        }

        EndDrawing();
    }
}

int main() 
{
    const int WeightScreen = 800;
    const int HightScreen = 600;
    InitWindow(WeightScreen, HightScreen, "GEOMETRY_QUEST");
    SetTargetFPS(60);
    int Otvet = 0;
    float OtvetF = 0;
    float OtvetF3 = 0;
    float OtvetF2 = 0;
    bool menu3Active = true;
    bool menu4Active = false;
    bool menu5Active = false;
    bool menu6Active = false;
    bool menu7Active = false;
    bool menu8Active = false;
    bool menu9Active = false;
    bool menu10Active = false;
    bool menu11Active = false;
    bool menu12Active = false;
    bool menu13Active = false;
    bool menuActive = false;
    bool menu1Active = false;
    bool level1Active = false;
    bool level2Active = false;
    bool level3Active = false;
    bool level4Active = false;
    bool level5Active = false;
    bool level6Active = false;
    bool level7Active = false;
    bool level8Active = false;
    bool level9Active = false;
    bool level10Active = false;
    bool level11Active = false;
    bool level12Active = false;
    bool level13Active = false;
    bool level14Active = false;
    bool level15Active = false;

    while (!WindowShouldClose())
    {
        if (menu3Active)
            menu3(menu4Active, menu3Active, menu4Active);
        else if (menu4Active)
            menu4(menu5Active, menu4Active, menu5Active);
        else if (menu5Active)
            menu5(menu6Active, menu5Active, menu6Active);
        else if (menu6Active)
            menu6(menu7Active, menu6Active, menu7Active);
        else if (menu7Active)
            menu7(menu8Active, menu7Active, menu8Active);
        else if (menu8Active)
            menu8(menu9Active, menu8Active, menu9Active);
        else if (menu9Active)
            menu9(menu10Active, menu9Active, menu10Active);
        else if (menu10Active)
            menu10(menu11Active, menu10Active, menu11Active);
        else if (menu11Active)
            menu11(menu12Active, menu11Active, menu12Active);
        else if (menu12Active)
            menu12(menu1Active, menu12Active, menu1Active);
        else if (menuActive)
            menu(menu1Active, menuActive, menu1Active);
        else if (menu1Active)
            menu1(menu1Active, menuActive, level2Active, level3Active, level4Active, level5Active, level6Active, level7Active, level8Active, level9Active, level10Active, level11Active);
        //else if (level1Active)
            //level1(Otvet, level1Active, level2Active);

        else if (level2Active)
            level2(level2Active, level3Active);

        else if (level3Active)
            level3(Otvet, level3Active, level4Active);

        else if (level4Active)
            level4(Otvet, level4Active, level5Active);

        else if (level5Active)
            level5(level5Active, level6Active);

        else if (level6Active)
            level6(Otvet, level6Active, level7Active);
        else if (level7Active)
            level7(level7Active, level8Active);
        else if (level8Active)
            level8(Otvet,level8Active, level9Active);
        else if (level9Active)
            level9(level9Active, level10Active);
        else if (level10Active)
            level10(Otvet,level10Active, level11Active);
        else if (level11Active)
            level11(OtvetF, OtvetF2, OtvetF3, level11Active, level12Active, menuActive);
    }

    CloseWindow();
    return 0;
}