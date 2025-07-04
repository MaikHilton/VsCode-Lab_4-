#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    // 1. Ціна гри зі знижкою
    int gamePrice = 450;
    float discountRate = 0.15f;
    int discountedPrice = gamePrice - (int)(gamePrice * discountRate);
    printf("Ціна гри зі знижкою: %d грн\n", discountedPrice);

    // 2. Обчислення віку
    int birthYear, currentYear = 2025;
    printf("Введіть рік народження: ");
    scanf("%d", &birthYear);
    int age = currentYear - birthYear;
    printf("Ваш вік: %d років\n", age);

    // 3. Евклідова відстань між двома точками
    float x1, y1, x2, y2;
    printf("Введіть координати першої точки (x y): ");
    scanf("%f %f", &x1, &y1);
    printf("Введіть координати другої точки (x y): ");
    scanf("%f %f", &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Відстань між точками: %.2f\n", distance);

    // 4. Вартість товару з введеною знижкою
    float itemPrice, discountPercent;
    printf("Введіть вартість товару: ");
    scanf("%f", &itemPrice);
    printf("Введіть відсоток знижки: ");
    scanf("%f", &discountPercent);
    float finalPrice = itemPrice - (itemPrice * discountPercent / 100);
    printf("Кінцева вартість товару: %.2f\n", finalPrice);

    // 5. Сума цифр тризначного числа
    int number;
    printf("Введіть тризначне число: ");
    scanf("%d", &number);
    int digitSum = (number / 100) + (number / 10 % 10) + (number % 10);
    printf("Сума цифр: %d\n", digitSum);

    // Творчі завдання

    // Питання: Що буде виведено?

    // int a = 7 / 2;
    // float b = 7 / 2;
    // printf("%d %.1f", a, b);

    // Варіанти відповідей:
    // A) 3 3.5
    // B) 3 3.0
    // C) 3 3
    // D) 3.5 3.5

    // Правильна відповідь: B) 3 3.0

    // Пояснення:
    // Вираз `7 / 2` — це цілочисельне ділення, результатом буде 3.
    // Змінна `b` також отримає значення 3 (не 3.5), бо ділення виконано до присвоєння.
    // Тобто float b = 3, а при виведенні з форматом %.1f отримаємо 3.0.

    int a1 = 7 / 2;
    float b1 = 7 / 2;
    printf("\n\n[Тест] Вивід: %d %.1f\n", a1, b1); // 3 3.0
    
    // Завдання:
    // Розібрати результат виконання наступного коду:
    // int a = 4, b = 7, c = 3;
    // int result = a++ + --b * c-- - ++a + b-- + c;
    // printf("a = %d\nb = %d\nc = %d\nresult = %d\n", a, b, c, result);

    // Пояснення:
    // У цьому виразі використовуються постфіксні (a++, c--, b--) та префіксні (++a, --b) інкременти/декременти.
    // Важливо пам'ятати, що:
    // - Постфіксний оператор повертає старе значення, а потім змінює змінну.
    // - Префіксний оператор змінює змінну перед використанням.
    // Кроки виконання:
    // 1) a++: використовується 4, після чого a стає 5
    // 2) --b: b зменшується з 7 до 6, використовується 6
    // 3) c--: використовується 3, після чого c стає 2
    // 4) ++a: a збільшується з 5 до 6, використовується 6
    // 5) b--: використовується 6, після чого b стає 5
    // 6) c: тепер c=2 (після декременту)
    // Обчислення:
    // result = 4 + 6*3 - 6 + 6 + 2 = 4 + 18 - 6 + 6 + 2 = 24
    // Після виконання a=6, b=5, c=2.

    int a2 = 4, b2 = 7, c2 = 3;
    int result2 = a2++ + --b2 * c2-- - ++a2 + b2-- + c2;

    printf("\nАналіз складного виразу:\n");
    printf("a = %d\nb = %d\nc = %d\nresult = %d\n", a2, b2, c2, result2);

    return 0;
}