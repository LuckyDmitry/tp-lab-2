#ifndef task2_h
#define task2_h

//Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N. 
//Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.


template<typename T, size_t size> T* createArr(T(*gen)()) { //возращает указатель на массив типа Т и применяет к каждому элементу массива типа Т
    T *array = new T[size]; //создаем новый массив, выделяя по него память
    for (size_t i = 0; i<size; i++){
        array[i] = gen(); //применяем функцию для каждого элемента
    }
    return array;
}


#endif /* task2_h */