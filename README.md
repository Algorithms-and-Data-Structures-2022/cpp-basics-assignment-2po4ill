# C++ auto-graded assignment template

[![Build Status](../../actions/workflows/classroom.yml/badge.svg)](../../actions/workflows/classroom.yml)
![Points bar](../../blob/badges/.github/badges/points-bar.svg)

## 1. Информация о студенте

**Номер группы**: 11-104

**Фамилия и Имя**: Девличаров Егор

## 2. Описание

**Баллы**:
- каждое задание оценивается в 1 балл (условный балл)
- баллы засчитываются лишь при собдюдении всех требований

**Требования**:
- разрешается вносить изменения только в файл [_src/code.cpp_](src/code.cpp)
- запрещается использовать дополнительные библиотеки, кроме уже подключенных 

**Список заданий** (см. файл [_src/code.cpp_](src/code.cpp)):

1. Вычисление квадрата разницы между двумя числами.

```text
Input: squared_diff(2, 5)
Output: 9

Input: squared_diff(-1, -1)
Output: 0
```

2. Проверка наличия бита на указанной позиции.

```text
Input: check_bit(8, 3)
Output: true

Input: check_bit(8, 2)
Output: false

Input: check_bit(-8, 3)
Output: false

Input: check_bit(8, -3)
Output: false
```

Ограничения:
- при передаче на вход отрицательного числа `mask` или `bit_pos`, функция должна вернуть `false`

Пояснения: 
- бит установлен на определенной позиции, если он равен 1 в этой позиции
- число 8 можно представить в виде 1000 в двоичной СС
- бит у числа 8 установлен лишь на позиции 3 (отсчитывается справа, начиная с нуля)

3. Поиск максимального числа среди трех.

```text
Input: max3(1, 0, 12)
Output: 12

Input: max3(1, 1, -2)
Output: 1
```

4. Обмен значениями по указателю.

Ограничения:
- при передаче хотя бы одного нулевого указателя, функция должна ничего не делать

```text
Input: 
int left = 3; int right = 5;
swap_args(&left, &right)

Output:
left = 5, right = 3

Input:
int left = 3; int* right = nullptr
swap_args(&left, right)

Output:
left = 3, right = nullptr
```

5. Вычисление суммы элементов массива.

Ограничения:
- при передаче нулевого указателя на массив (`arr`), функция дожлжна вернуть 0
- при передаче неположительного значения длины массива (`length <= 0`), функция должна вернуть 0

```text
Input: arr_sum([1, 2, 3, 4, 5], 5)
Output: 15

Input: arr_sum([1, 2, 3], 0)
Output: 0

Input: arr_sum(nullptr, 5)
Output: 0
```
* _запись входного массива условна_

6. Поиск максимального элемента в массиве.

Пояснение:
- возвращается указатель на первый максимальный элемент в массиве, а не его значение

Ограничения:
- при подаче нуелового указателя на массив (`arr`) или неположительного значения длины (`length <= 0`), функция должна вернуть нулевой указатель

```text
Input: find_max_elem([1, 2, 3, 4, 5], 5)
Output: 0x5F21 -> 5 (указатель, который ссылается на значение 5)

Input: find_max_elem([1, 2, 2], 3)
Output: 0x3A25 -> 2 (элемент по индексу 1)

Input: find_max_elem(nullptr, 5)
Output: nullptr

Input: find_max_elem([1, 2, 3], -1)
Output: nullptr
```
* _запись входного массива условна_

7. Выделение памяти под массив и инициализация значениями.

Ограничения:
- при подаче неположительного значения длины массива (`length <= 0`), функция должна ничего не создавать и вернуть нулевой указатель

Пояснения:
- для инициализации элементов массива можно использовать функцию `std::fill` 

```text
Input: allocate_arr(3, 0)
Output: [0, 0, 0]

Input: allocate_arr(2, 3)
Output: [3, 3]

Input: allocate_arr(0, 0)
Output: nullptr
```

8. Клонирование массива.

Ограничения:
- при подаче на вход нулевого указателя на массив (`arr_in`) или неположительного значения длины (`length <= 0`), функция должна вернуть нулевой указатель и ничего не выделять

Пояснения:
- внутри функции необходимо выделить участок памяти под новый массив и скопировать туда значения элементов входного массива (`arr_in`)
- для копирования значений элементов можно использовать функцию `std::copy`

```text
Input: clone_arr([1, 2, 3], 3)
Output: [1, 2, 3]

Input: clone_arr([1, 2, 3], 0)
Output: nullptr

Input: clone_arr(nullptr, 3)
Output: nullptr
```

9. Вывод каждого k-ого элемента массива.

Ограничения:
- при подаче на вход нулевого указателя на массив (`arr`) или неположительного значения длины (`length <= 0`), в поток вывода (`os`) должно вывестить сообщение об ошибке `"Invalid argument: arr\n"` или `"Invalid argument: length\n"`, соответственно
- при подаче на вход неположительного значения шага `k <= 0`, в поток вывода должно вывестить сообщение `"Invalid argument: k\n"`

Пояснения:
- для вывода данных используйте объект `os` (4ый аргумент): `os << "Мое сообщение\n"`
- по-умолчанию `os` установлен в `std::cout`

```text
Input: print_kth_elements(nullptr, 5, 1)
Output: "Invalid argument: arr\n"

Input: print_kth_elements([1, 2], 0, 1)
Output: "Invalid argument: length\n"

Input: print_kth_elements([1, 2], 2, 0)
Output: "Invalid argument: k\n"

Input: print_kth_elements([1, 2, 3, 4, 5], 5, 3)
Output: "1\t4\t"

Input: print_kth_elements([1, 2, 3], 3, 5)
Output: "1\t"
```

## 3. Инструкции

1. Склонируйте локальную копию репозитория к себе на компьютер.
2. Внесите информацию о себе в раздел "Информация о студенте".
3. Подробно изучите описание задания. При наличии вопросов обратитесь к <strike>врачу</strike> преподавателю.
4. Реализуйте задание в соответствии указанным требованиям.
5. Запустите локальные тесты (при их наличии).
6. Отправьте задание на auto-grading тесты и дождитесь итогового балла.
7. Повторите пункты 4-6 до получения макс. кол-ва баллов.

## 4. Ограничения

- Запрещается вносить изменения в файлы, не указанных в разделе "Описание задания".
- Запуск auto-grading тестов осуществляется:
  - автоматически при внесении изменений в [_src_](src) и/или [_include_](include)
  на ветках _**master**_ или _**main**_;
  - вручную во вкладке _Actions_.

## 5. Примечания

- Результирующие баллы высчитываются при каждом новом push'е (для последнего commit'а).
- По истечении установленных временных сроков сдачи система продолжит высчитывать итоговый балл при внесении изменений.
- Сроки сдачи устанавливаются преподавателем и указываются в индивидуальном порядке для каждой группы.
- Тесты подразделяются на **локальные** и **auto-grading**:
  - локальные тесты запускаются на компьютере через среду разработки (IDE);
  - auto-grading тесты запускаются на GitHub и вычисляют итоговый балл за задание.
- При клонировании репозитория через терминал используйте команду: 
  ```shell
    git clone --recurse-submodules <URL>
  ```

---

**Преподаватель**: Рамиль Сафин (Telegram: [_@safin_ramil_](https://t.me/safin_ramil), e-mail: _safin.ramil@it.kfu.ru_).
