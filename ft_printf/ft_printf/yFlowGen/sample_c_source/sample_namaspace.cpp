using namespace std;

template < typename T >
T max(T const& a, T const& b)
{
    return a < b ? b : a ;
}

int main(){
    cout << max(1,2) << endl; // �G���[����
    return 0;
}

namespace A
{
    void f(){std::cout << "A" << std::endl;};
    void hoge(){
        f(); // ���O��Ԃ̒��ł͏C�����Ȃ��Ă��Ăяo����
    }
}

namespace B
{
    void f(){std::cout << "B" << std::endl;};
    void hoge(){
        A::f(); // �ʂ̖��O��Ԃ���Ăт����Ȃ�C������
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

    // 2��T���B
    std::vector<int>::iterator vec_itr;
    vec_itr = std::find_if(vec.begin(),vec.end(),is_same<2>());
    std::cout << *vec_itr;
}

int func1 {
    std::auto_ptr p(new int(1)); // ���Fstd::auto_ptr ��C++11�ȍ~�͔񐄏��ł��B
}

class Buffer
{
private:
    UIntN   size;      // �o�b�t�@ �T�C�Y
    VoidPtr pointer;   // �o�b�t�@ �|�C���^
    // ����VoidPtr ��Void* �̂��Ƃł��BSophiaFramework UNIVERSE �̓|�C���^��Ptr �����ĕ\���܂��B

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
    ~Buffer()          // �f�X�g���N�^
    {
        if (pointer != NULL)
            MemoryFree(pointer);
    }
};