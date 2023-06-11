
class Compare {
public: 
    int findSmaller(int a, int b);
    float findSmaller(float f1, float f2);
    char findSmaller(char p, char q);

    int findSmaller(int a, int b, int c);
    float findSmaller(float f1, float f2, float f3);
    char findSmaller(char p, char q, char r);

    int findSmaller(int arr[], int size);
    float findSmaller(float arr[], int size);
    char findSmaller(char [], int size);

};

int Compare::findSmaller(int a, int b) {
    if(a>b) {
        return b;
    } else {
        return a;
    }
}

float Compare::findSmaller(float f1, float f2) {
    if(f1>f2) {
        return f2;
    } else {
        return f1;
    }
}

char Compare::findSmaller(char p, char q) {
    if(p>q) {
        return q;
    } else {
        return p;
    }
}

// compare with three parameters
int Compare::findSmaller(int a, int b, int c) {
    if(a < b && a < c) {
        return a; // a is small
    } else if(b < c) {
        return b;
    } else {
        return c;
    }
}

float Compare::findSmaller(float f1, float f2, float f3) {
    if(f1 < f2 && f1 < f3) {
        return f1; // a is small
    } else if(f2 < f3) {
        return f2;
    } else {
        return f3;
    }
}

char Compare::findSmaller(char p, char q, char r) {
    if(p < q && p < r) {
        return p; // a is small
    } else if(q < r) {
        return q;
    } else {
        return r;
    }
}

// array comparision
int Compare::findSmaller(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        
    }
}