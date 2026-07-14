    cout << var << endl; // 30
    cout << &var << endl; // var deyiseninin adresssin
    cout << *(&var) << endl << endl; // var deyiseninin adresindeki deyeri yeni 30

    cout << ptr << endl; // var deyiseninin yaddas addressi
    cout << &ptr << endl; // ptr deyiseninin yaddas addresi
    cout << *ptr << endl << endl; // 30

    cout << pptr << endl; // ptr-nin addresin saxlayir
    cout << &pptr << endl; //  // ptr-nin addresin saxlayir
    cout << *pptr << endl; // var deyiseninin adresssin
    cout << &(*pptr) << endl << endl; // ptr deyiseninin yaddas addresi

    cout << **pptr << endl; // 30
    cout << &(**pptr) << endl << endl; // // var deyiseninin adresssin