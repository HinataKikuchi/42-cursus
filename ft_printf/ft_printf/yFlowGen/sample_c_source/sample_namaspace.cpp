using namespace std;

template < typename T >
T max(T const& a, T const& b)
{
    return a < b ? b : a ;
}

int main(){
    cout << max(1,2) << endl; // エラーだよ
    return 0;
}

namespace A
{
    void f(){std::cout << "A" << std::endl;};
    void hoge(){
        f(); // 名前空間の中では修飾しなくても呼び出せる
    }
}

namespace B
{
    void f(){std::cout << "B" << std::endl;};
    void hoge(){
        A::f(); // 別の名前空間から呼びたいなら修飾する
    }
}

int main()
{
    A::f(); // A
    B::f(); // B
    A::hoge(); // A
    B::hoge(); // A
}

class X{
public:
    explicit X(val):val_(val){}
private:
    int val_;
};

class Base{
public:
    // ...
    virtual ~Base() // OK
    // ~Base()      // NG
};
class Sub : public Base{
public:
    // ...
    virtual ~Sub()
};

class X{
public:
    // ...
    int val() const {return val_;}
private:
    int val_;
};

void func()
{
    try{
    throw std::runtime_error("error");
    }
    catch(const std::runtime_error& e)
    {
        std::cout << e.what();
    }
}

template <int N>
struct is_same{
    bool operator()(int i){return i==N;}
};

int main() {
    std::vector<int> vec;
    for(int i = 0;i<10;++i){ vec.push_back(i);}
    for(int k = 0;k<10;++k){ vec.push_back(k);
    }
    for(int s = 0;
    	s<10;
    	++s){ vec.push_back(s);
    }

    // 2を探す。
    std::vector<int>::iterator vec_itr;
    vec_itr = std::find_if(vec.begin(),vec.end(),is_same<2>());
    std::cout << *vec_itr;
}

int func1 {
    std::auto_ptr p(new int(1)); // 注：std::auto_ptr はC++11以降は非推奨です。
}

class Buffer
{
private:
    UIntN   size;      // バッファ サイズ
    VoidPtr pointer;   // バッファ ポインタ
    // ↑のVoidPtr はVoid* のことです。SophiaFramework UNIVERSE はポインタをPtr をつけて表します。

public:
    Buffer()
    {
         size = 0;
         pointer = NULL;
    }
    Buffer(UIntN sz)
    {
        size = sz;
        pointer = MemoryAllocate(sz);
    }
    VoidPtr GetPointer()
    {
        return pointer;
    }
    ~Buffer()          // デストラクタ
    {
        if (pointer != NULL)
            MemoryFree(pointer);
    }
};