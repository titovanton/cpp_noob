# Нубасски бабаски Щи++

Билд врятли подходит под серьезную разработку на C/C++, скорей всего вам
придется отвалить сотку баксов за норм IDE. Но это не точно... Зато что точно -
то что билд подойдет под разработку на любом скриптовом языке.

Я писал на миксе из style guides: PEP8(Python) + JS. Не думаю, что Щи сильно
отличаются от Java/JavaScript в стиле...
Тот файл, который мне поступил на доработку был уродлив. Хоть как то причесал:

  1. После include - всегда 2 перевода строки
  2. Перед операторами for/while/if, функциями и после - 1 перевод строки
  3. Отступ в 2 пробела, т.к. язык обрамляет скобу фигурными скобками и отступо-
  независимый, как Python, Coffeescipt, etc...
  4. if/else - в стиле JavaScript, всегда юзать скобу: очевидное - лучше, чем не
  очевидное.
  5. Перед классами всегда 2 перевода строки, внутри класса, между методами - по
  одному. Но в задачах классов нет.
  6. Всегда обрамляйте операторы присваевания, сравнения и подобные пробелами,
  так же не забывайте пробелы после запятой в параметрах при вызове функций.

У меня вопрос к нубасам: вы в тетради пишите наискосок? Или со случайными
отступами, кривыми пробелами? Точки и запятые не ставите? Ну дак вот ваш код
так же невозможен к прочтению, пока вы не юзаете style guide.

## Tools & files

- **.editorconfig** - задает форматирование файлов с исходным кодом, основываясь на
расширении файла
- **.gitignore** - игнорит файлы при добавлении их в репо, про [Git читай тут](https://git-scm.com/book/ru/v1/%D0%92%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D1%8B-Git)
- **package.json** - конфиг проекта на npm/Node.js. Коротко, Node.js - это движок,
гоняющий JavaScript на сервере. [Node.js тут](https://nodejs.org/en/docs/)
- **.gulpfile.js** - конфиг Gulp. Потоковый таск менеджер, с помощью него, я
запускаю команду компиляции файлов .cpp и веду наблюдение над их изменением.
Как только \*.cpp файл изменен - запускается компиляция. [Gulp тут](https://github.com/gulpjs/gulp/blob/v3.9.1/docs/API.md)
- **Vagrantfile** - средство виртуализации. Простыми словами:
на PC у меня Win10, но она не подходит для работы с OpenSource/Free технологиями.
В лучшем случае, на ней можно писать прилаги под нее саму, используя Microsoft
IDE для разработки. Все остальные варики, танцы с бубном и прочие попытки -
не уважаемый порн, по причинам:

  1. Многие работают на Mac OS например - отсюда конфликт окружения
  2. Никто в здравом уме не будет хостить на винде приложения, кроме .NET
  разработчиков. Отсюда разность между production & development env, которую нужно
  избегать.
  3. Каждый новый разраб, присоединяющийся к проекту, должен испытывать
  минимальную жопоболь, для раскатки проекта на своей машине.

Вот мы и пришли к использованию Vagrant, который повзоляет крутить Ubuntu(Linux)
на винде, раскатывать нужный фарш внутри этой капсулы и не влиять ни на соседние
проекты, ни на саму винду. [Vagrant читать тут](https://www.vagrantup.com/docs/)

## Tasks
соответственно лежать в папке `tasks`.

  1. Разработать программу, подсчитывающую количество символов,
  слов и строк в текстовом файле.

PS: Вообще задача звучит тупо конечно. Автор
скажет: это исключительно в академических целях. Тогда нафига вообще учить
C/C++, у которого мало ништяков для работы со строками? Да и вообще работа
со строками - это прон, как и со многим другим. Не понимаю, кому может
понадобится в 2018 году писать коротенькие программки на C/C++, предпочитая
его тому же Python, на котором пишут скраперы, скрипты для работы с BIG Data,
ML, Block Chain, не говоря уже о современны и масштабных web-приложениях?
Только нубасу может придти это в голову, которому в универе преподавали C/C++ и
он больше в жизни ничего не трогал, ибо если бы потрогал, то врятли бы стал
заниматься этим ананизмом, для сомнительной прибавке в производительности
коротенького скриптика. Сейчас смарфтоны быстрей, чем ПК 20 лет назад....
Если вы разрабатываете игры - возможно, но это не точно.
Сейчас прибежит какой нить криворукий препод с дырко на жопе, 23-30 лет, или
упоротый холивар фанат Щей,
и будет мне рассказывать о больших Enterprise проектах, о великом Щи ООП...
Естественно, ничего такого он не писал в своей жизни. Максимум - это всякий
околонаучный ананизм, чтобы почесать свое самолюбие, на потеху "научной"
тусовочки... Нет, я не против науки, но это другая тема(не подсчет слов в файле)
и я просто прекрасно представляю о ком говорю...
Ну дак а че не на Java, Scala или Go писать большие проекты? Эти языки сейчас в
тренде, дают больше ништяков, прощают больше и тп. С++ в УПИ так же нужен
для жизни, как Pascal 15 лет назад, который насаждали чуть менее чем везде...
Сверхдержава хули... Я еще люблю слышать вонь, про то, что "наши ITшники очень
ценятся на западе" - ага, только после того, как они переучатся, работая лет 5
в реальном бизнесе, ну или самородки, которые уже в ВУЗе ковыряли то, о чем в
программе ни слова...

PSS: если уж сильно упарываться за скорость, то писать на C,  а не на C++, и со
вставками из ASM... Но в реальности это может понадобится, пожалуй только для
робототехники какой-нить...
