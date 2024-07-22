
#pragma region 함수(Function)와 메소드(Method) 차이
/*

함수(Function)와 메소드(Method)는 비슷한 개념이지만, 몇 가지 중요한 차이점이 있습니다¹²:

### 함수 (Function)
- **독립적**: 함수는 특정 작업을 수행하는 독립적인 코드 조각입니다. 클래스나 객체에 속하지 않고, 전역적으로 정의될 수 있습니다.
- **호출 방식**: 함수는 이름을 통해 호출됩니다.
- **예시**:
  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```

### 메소드 (Method)
- **객체 종속적**: 메소드는 클래스나 객체에 속한 함수입니다. 객체의 상태를 조작하거나 객체와 관련된 작업을 수행합니다.
- **호출 방식**: 메소드는 객체를 통해 호출됩니다.
- **예시**:
  ```cpp
  class Car {
  public:
      void run() {
          cout << "자동차가 주행합니다!" << endl;
      }
  };

  int main() {
      Car myCar;
      myCar.run(); // 메소드 호출
      return 0;
  }
  ```

### 주요 차이점
1. **독립성**: 함수는 독립적으로 존재할 수 있지만, 메소드는 반드시 클래스나 객체에 속해야 합니다.
2. **호출 방식**: 함수는 이름으로 호출되지만, 메소드는 객체를 통해 호출됩니다.
3. **역할**: 함수는 일반적으로 특정 작업을 수행하는 데 사용되며, 메소드는 객체의 상태를 조작하거나 객체와 관련된 작업을 수행합니다¹².

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [네이버 블로그](https://blog.naver.com/PostView.naver?blogId=stranger_yang&logNo=223376251160)
²: [벨로그](https://velog.io/@yejin20/Python-%ED%95%A8%EC%88%98%EC%99%80-%EB%A9%94%EC%86%8C%EB%93%9C%EC%9D%98-%EC%B0%A8%EC%9D%B4%EC%A0%90)

원본: Copilot과의 대화, 2024. 7. 22.
(1) 함수와 메소드의 차이! 초보자도 쉽게 이해하는 비교 설명 .... https://blog.naver.com/PostView.naver?blogId=stranger_yang&logNo=223376251160.
(2) [Python] 함수와 메소드의 차이점 - 벨로그. https://velog.io/@yejin20/Python-%ED%95%A8%EC%88%98%EC%99%80-%EB%A9%94%EC%86%8C%EB%93%9C%EC%9D%98-%EC%B0%A8%EC%9D%B4%EC%A0%90.
(3) 메서드(Method)와 함수(Function) 의 차이점과 공통점 - HTML6. https://bing.com/search?q=%ed%95%a8%ec%88%98%ec%99%80+%eb%a9%94%ec%86%8c%eb%93%9c%ec%9d%98+%ec%b0%a8%ec%9d%b4.
(4) 함수, 메소드 , 개념차이_Day47 - 칼리드월드. https://khalidpark2029.tistory.com/145.
(5) 함수(Function) VS 메소드(Method) - ZeddiOS. https://zeddios.tistory.com/233.
*/
#pragma endregion

#pragma region C++에서 wchar_t의 w는 "wide"를 의미
/*
* C++에서 `wchar_t`의 `w`는 "wide"를 의미합니다. `wchar_t`는 "wide character type"의 약자로, 일반적인 `char` 타입보다 더 넓은 범위의 문자를 표현할 수 있는 데이터 타입입니다¹².

### 주요 특징:
- **크기**: `wchar_t`는 일반적으로 2바이트 또는 4바이트 크기를 가지며, 이는 플랫폼에 따라 다를 수 있습니다. 예를 들어, Windows에서는 2바이트 크기를 가지며, UTF-16 인코딩을 사용합니다³.
- **용도**: 주로 유니코드(Unicode) 문자를 저장하는 데 사용됩니다. 이는 다양한 언어와 문자를 표현할 수 있게 해줍니다.
- **표현 범위**: `char`는 256개의 서로 다른 값을 가질 수 있는 반면, `wchar_t`는 훨씬 더 많은 문자를 표현할 수 있습니다¹.

예를 들어, 다음과 같이 `wchar_t`를 사용할 수 있습니다:

```cpp
#include <iostream>
using namespace std;

int main() {
    wchar_t wide_char = L'가'; // 한글 문자
    wcout << L"Wide character: " << wide_char << endl;
    return 0;
}
```

이 코드에서 `L'가'`는 wide character 리터럴을 나타내며, `wcout`을 사용하여 wide character를 출력합니다.

더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [Stack Overflow](https://stackoverflow.com/questions/13509733/what-is-the-use-of-wchar-t-in-general-programming)
²: [Microsoft Learn](https://learn.microsoft.com/en-us/cpp/cpp/char-wchar-t-char16-t-char32-t?view=msvc-170)
³: [cplusplus.com](https://cplusplus.com/reference/cwchar/wchar_t/)

원본: Copilot과의 대화, 2024. 7. 22.
(1) c++ - What is the use of wchar_t in general programming? - Stack Overflow. https://stackoverflow.com/questions/13509733/what-is-the-use-of-wchar-t-in-general-programming.
(2) c++ - What is the difference between 'WCHAR' and 'wchar_t'? - Stack Overflow. https://stackoverflow.com/questions/561839/what-is-the-difference-between-wchar-and-wchar-t.
(3) char, wchar_t, char8_t, char16_t, char32_t | Microsoft Learn. https://learn.microsoft.com/en-us/cpp/cpp/char-wchar-t-char16-t-char32-t?view=msvc-170.
(4) wchar_t - C++ Users. https://cplusplus.com/reference/cwchar/wchar_t/.
(5) char-wchar-t-char16-t-char32-t.md - GitHub. https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/cpp/char-wchar-t-char16-t-char32-t.md.
*/
#pragma endregion

#pragma region 클래스 부모 자식 클래스
/*
C++에서 클래스 상속은 기존 클래스(부모 클래스)의 특성과 기능을 새로운 클래스(자식 클래스)에 물려주는 기능입니다. 이를 통해 코드의 재사용성을 높이고, 클래스 간의 계층적 관계를 형성할 수 있습니다¹².

### 부모 클래스 (Base Class)
부모 클래스는 다른 클래스에 의해 상속되는 클래스를 의미합니다. 부모 클래스는 자식 클래스가 사용할 수 있는 멤버 변수와 메서드를 정의합니다.

```cpp
class Parent {
public:
    void show() {
        cout << "부모 클래스의 함수" << endl;
    }
};
```

### 자식 클래스 (Derived Class)
자식 클래스는 부모 클래스를 상속받아 그 특성과 기능을 물려받는 클래스를 의미합니다. 자식 클래스는 부모 클래스의 멤버를 그대로 사용할 수 있으며, 필요에 따라 추가적인 멤버를 정의하거나 부모 클래스의 멤버를 재정의할 수 있습니다.

```cpp
class Child : public Parent 
{
public:
    void show() 
    {
        cout << "자식 클래스의 함수" << endl;
    }
};
```

### 예제
다음은 부모 클래스와 자식 클래스를 정의하고 사용하는 예제입니다:

```cpp
#include <iostream>
using namespace std;

class Parent {
public:
    void show() 
    {
        cout << "부모 클래스의 함수" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "자식 클래스의 함수" << endl;
    }
};

int main() {
    Parent p;
    Child c;

    p.show(); // 부모 클래스의 함수
    c.show(); // 자식 클래스의 함수

    return 0;
}
```

이 예제에서 `Child` 클래스는 `Parent` 클래스를 상속받아 `show` 메서드를 재정의합니다. `main` 함수에서 `Parent`와 `Child` 객체를 생성하고, 각각의 `show` 메서드를 호출하여 결과를 확인할 수 있습니다.

상속을 통해 코드의 재사용성을 높이고, 클래스 간의 계층적 관계를 명확히 할 수 있습니다. 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [네이버 블로그](https://m.blog.naver.com/hj_kim97/222944419940)
²: [네이버 블로그](https://blog.naver.com/PostView.naver?blogId=higeon_&logNo=223330600673&noTrackingCode=true)

원본: Copilot과의 대화, 2024. 7. 22.
(1) [C++]C++ 상속 (기초 클래스, 파생 클래스, 추상 클래스) : 네이버 .... https://m.blog.naver.com/hj_kim97/222944419940.
(2) [C++ 이론] 클래스 - 상속(Inheritance) : 네이버 블로그. https://blog.naver.com/PostView.naver?blogId=higeon_&logNo=223330600673&noTrackingCode=true.
(3) C++ 강좌 14편. 상속 오버라이딩과 가상 함수, 그리고 다중 상속. https://blog.hexabrain.net/175.



================================================

C++에서 클래스 상속을 활용하면 코드의 재사용성을 높이고, 클래스 간의 계층적 관계를 명확히 할 수 있습니다. 상속을 통해 부모 클래스의 특성과 기능을 자식 클래스가 물려받아 사용할 수 있습니다. 몇 가지 활용 예제를 통해 상속의 장점을 살펴보겠습니다¹².

### 예제 1: 기본 상속
기본적인 상속을 통해 부모 클래스의 멤버를 자식 클래스에서 사용하는 예제입니다.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // 부모 클래스의 함수 호출
    myDog.bark(); // 자식 클래스의 함수 호출
    return 0;
}
```

### 예제 2: 함수 오버라이딩
자식 클래스에서 부모 클래스의 함수를 재정의(오버라이딩)하여 사용하는 예제입니다.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound(); // 자식 클래스의 함수 호출
    delete animal;
    return 0;
}
```

### 예제 3: 다중 상속
C++에서는 다중 상속을 통해 여러 부모 클래스로부터 상속받을 수 있습니다.

```cpp
#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "Wheels rolling" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        start();
        roll();
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive(); // 다중 상속을 통해 여러 부모 클래스의 함수 호출
    return 0;
}
```

이처럼 상속을 활용하면 코드의 재사용성을 높이고, 클래스 간의 관계를 명확히 할 수 있습니다. 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [네이버 블로그](https://m.blog.naver.com/hj_kim97/222944419940)
²: [Hexabrain 블로그](https://blog.hexabrain.net/173)

원본: Copilot과의 대화, 2024. 7. 22.
(1) [C++]C++ 상속 (기초 클래스, 파생 클래스, 추상 클래스) : 네이버 .... https://m.blog.naver.com/hj_kim97/222944419940.
(2) [C/C++ 프로그래밍 : 중급] 5. 상속 - GDNGY. https://bing.com/search?q=C%2b%2b+%ed%81%b4%eb%9e%98%ec%8a%a4+%ec%83%81%ec%86%8d+%ed%99%9c%ec%9a%a9+%ec%98%88%ec%a0%9c.
(3) C++ 클래스 구현, 상속, 자동차 예제 - pepe. https://pepega.tistory.com/7.
(4) [C++ 이론] 클래스 - 상속(Inheritance) : 네이버 블로그. https://blog.naver.com/PostView.naver?blogId=higeon_&logNo=223330600673&noTrackingCode=true.
(5) C++ 강좌 12편. 상속(Inheritance) - 끝나지 않는 프로그래밍 일기. https://blog.hexabrain.net/173.
(6) undefined. https://bing.com/search?q=.
(7) github.com. https://github.com/40660367/books/tree/7923d36dc357df0261478d69a3e92fba56c4232a/cpp%2Foob-inheritance.md.
(8) github.com. https://github.com/Kunalsjcodes/Cpp_Language/tree/f918922f8e48fd840c880b416729f4912cc18dd7/Ex_Inhertance_multilevel.cpp.
(9) github.com. https://github.com/swap2499/CPP-Program/tree/570bd23f10b368aa62ba5ac3a4aa845f953e9455/Inheritance%2Fsingle2.cpp.


*/
#pragma endregion

#pragma region const vs constexpr
/*
* C++에서 `const`와 `constexpr`는 모두 상수를 정의하는 데 사용되지만, 그 의미와 사용 방식에는 차이가 있습니다¹².

### `const`
- **의미**: `const`는 변하지 않는 값을 나타내며, 런타임 상수입니다.
- **사용 시점**: 변수나 객체가 초기화된 후 값을 변경할 수 없음을 보장합니다.
- **예시**:
  ```cpp
  const int x = 10;
  // x의 값은 변경할 수 없습니다.
  ```

### `constexpr`
- **의미**: `constexpr`는 컴파일 타임 상수를 나타내며, 컴파일 타임에 값이 결정됩니다.
- **사용 시점**: 상수 표현식(constant expression)을 정의할 때 사용되며, 컴파일러가 컴파일 타임에 해당 값을 계산할 수 있어야 합니다.
- **예시**:
  ```cpp
  constexpr int y = 20;
  // y의 값은 컴파일 타임에 결정됩니다.
  ```

### 주요 차이점
1. **컴파일 타임 vs 런타임**: `const`는 런타임 상수이고, `constexpr`는 컴파일 타임 상수입니다¹².
2. **초기화 시점**: `const` 변수는 런타임에 초기화될 수 있지만, `constexpr` 변수는 반드시 컴파일 타임에 초기화되어야 합니다¹².
3. **사용 목적**: `constexpr`는 컴파일 타임에 상수 값을 미리 계산하여 최적화할 수 있는 경우에 사용됩니다.

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [코딩판다](https://coding-panda.com/c-const%EC%99%80-constexpr-%EC%B0%A8%EC%9D%B4%EC%A0%90-constexpr%EC%9D%84-%EC%93%B0%EB%8A%94%EA%B2%8C-%EB%8D%94-%EC%A2%8B%EC%9D%80-%EC%9D%B4%EC%9C%A0/)
²: [모두의 코드](https://modoocode.com/293)

원본: Copilot과의 대화, 2024. 7. 22.
(1) 씹어먹는 C++ - <16 - 2. constexpr 와 함께라면 컴파일 타임 상수는 .... https://modoocode.com/293.
(2) [C++] const와 constexpr 차이점. constexpr을 쓰는게 더 좋은 이유.. https://coding-panda.com/c-const%EC%99%80-constexpr-%EC%B0%A8%EC%9D%B4%EC%A0%90-constexpr%EC%9D%84-%EC%93%B0%EB%8A%94%EA%B2%8C-%EB%8D%94-%EC%A2%8B%EC%9D%80-%EC%9D%B4%EC%9C%A0/.
(3) [C++] 키워드 constexpr 알아보기 - BlankSpace. https://bing.com/search?q=C%2b%2b+const+constexpr+%ec%9d%98%eb%af%b8.
(4) [C언어/C++]const란? 사용이유(constexpr 비교, int&, 함수 인자). https://scribblinganything.tistory.com/759.
(5) undefined. https://bing.com/search?q=.
*/
#pragma endregion

#pragma region C++에서 리터럴 상수와 심볼릭 상수
/*

C++에서 리터럴 상수와 심볼릭 상수는 상수를 표현하는 두 가지 방법입니다. 각각의 차이점과 특징을 살펴보겠습니다¹².

### 리터럴 상수 (Literal Constants)
- **의미**: 리터럴 상수는 코드에서 직접 사용되는 값입니다. 이름이 없는 상수로, 숫자, 문자, 문자열 등 다양한 형태로 표현될 수 있습니다.
- **예시**:
  ```cpp
  int age = 25; // 여기서 25가 리터럴 상수입니다.
  char letter = 'A'; // 여기서 'A'가 리터럴 상수입니다.
  ```

### 심볼릭 상수 (Symbolic Constants)
- **의미**: 심볼릭 상수는 이름을 가진 상수로, 변하지 않는 값을 의미하는 기호화된 상수입니다. 주로 `const` 키워드나 `#define`을 사용하여 정의됩니다.
- **예시**:
  ```cpp
  const int MAX_STUDENTS = 30; // const 키워드를 사용한 심볼릭 상수
  #define PI 3.14 // #define을 사용한 심볼릭 상수
  ```

### 주요 차이점
1. **표현 방식**: 리터럴 상수는 값 자체를 코드에 직접 작성하는 반면, 심볼릭 상수는 이름을 통해 값을 참조합니다.
2. **가독성**: 심볼릭 상수는 의미 있는 이름을 사용하여 코드의 가독성을 높이고, 유지보수를 쉽게 합니다. 예를 들어, `MAX_STUDENTS`는 30이라는 숫자보다 의미를 더 명확하게 전달합니다¹².
3. **유지보수성**: 심볼릭 상수는 값이 변경될 때 한 곳에서만 수정하면 되므로, 코드 전체에서 일관성을 유지할 수 있습니다.

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [디지콘팩토리](https://digiconfactory.tistory.com/entry/C-%EC%83%81%EC%88%98-%EB%A6%AC%ED%84%B0%EB%9F%B4-%EC%83%81%EC%88%98%EC%99%80-%EC%8B%AC%EB%B3%BC%EB%A6%AD-%EC%83%81%EC%88%98)
²: [IT에 취.하.개.](https://hongku.tistory.com/48)

원본: Copilot과의 대화, 2024. 7. 22.
(1) C++ | 상수(Constant) | 리터럴 상수와 심볼릭 상수 (Literal and Symbolic). https://digiconfactory.tistory.com/entry/C-%EC%83%81%EC%88%98-%EB%A6%AC%ED%84%B0%EB%9F%B4-%EC%83%81%EC%88%98%EC%99%80-%EC%8B%AC%EB%B3%BC%EB%A6%AD-%EC%83%81%EC%88%98.
(2) [C언어 독학하기] 5. 상수 (리터럴 상수, 심볼릭 상수). https://bing.com/search?q=C%2b%2b+%eb%a6%ac%ed%84%b0%eb%9f%b4+%ec%83%81%ec%88%98+%ec%8b%ac%eb%b3%bc%eb%a6%ad+%ec%83%81%ec%88%98+%ec%b0%a8%ec%9d%b4.
(3) [C언어 독학하기] 5. 상수 (리터럴 상수, 심볼릭 상수). https://gdnn.tistory.com/43.
(4) C언어 :: 상수와 상수의 종류, const와 #define #5 - IT에 취.하.개.. https://hongku.tistory.com/48.
(5) undefined. https://bing.com/search?q=.

*/
#pragma endregion

#pragma region C++에서 람다식이란
/*
C++에서 람다식(lambda expression)은 익명 함수(이름이 없는 함수)를 정의하는 방법입니다. 이는 함수 객체를 간단하게 만들 수 있는 기능으로, 주로 C++11 이후부터 사용됩니다¹².

### 람다식의 기본 구조
람다식의 기본 구조는 다음과 같습니다:

```cpp
[capture](parameters) -> return_type {
    // 함수 본문
};
```

- **capture**: 람다 함수가 외부 범위에서 변수를 캡처하는 방법을 지정합니다.
- **parameters**: 함수의 매개변수를 정의합니다.
- **return_type**: 함수의 반환 타입을 지정합니다. 생략할 수 있으며, 컴파일러가 자동으로 추론합니다.
- **함수 본문**: 람다 함수의 실제 동작을 정의합니다.

### 예제
다음은 람다식을 사용한 간단한 예제입니다:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 람다식을 사용하여 벡터의 모든 요소를 출력
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // 람다식을 사용하여 벡터의 모든 요소를 두 배로 증가
    std::for_each(numbers.begin(), numbers.end(), [](int &n) {
        n *= 2;
    });

    // 결과 출력
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    return 0;
}
```

### 캡처 방식
람다식에서 외부 변수를 캡처하는 방법은 다음과 같습니다:
- **값으로 캡처**: `[=]` 또는 `[변수명]`
- **참조로 캡처**: `[&]` 또는 `[&변수명]`

```cpp
int x = 10;
auto lambda = [x]() { return x + 1; }; // 값으로 캡처
auto lambda_ref = [&x]() { x += 1; };  // 참조로 캡처
```

람다식은 코드의 가독성을 높이고, 간결하게 작성할 수 있게 해줍니다. 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [BlockDMask](https://blockdmask.tistory.com/491)
²: [Microsoft Learn](https://learn.microsoft.com/ko-kr/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170)

원본: Copilot과의 대화, 2024. 7. 22.
(1) [C++] 람다 표현식, lambda에 대해서 - 개발자 지망생. https://blockdmask.tistory.com/491.
(2) [C++] 람다 표현식(lambda expression) 문법 (람다 함수) 총정리 C++11 sort .... https://m.blog.naver.com/dorergiverny/223056199981.
(3) C++ 람다 식 | Microsoft Learn. https://learn.microsoft.com/ko-kr/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170.
(4) C++14 : 람다 캡처 표현식(Lambda capture expressions). https://mypark.tistory.com/entry/C14-%EB%9E%8C%EB%8B%A4-%EC%BA%A1%EC%B2%98-%ED%91%9C%ED%98%84%EC%8B%9DLambda-capture-expressions.
*/
#pragma endregion

#pragma region 컴파일타임 vs 런타임
/*
C++에서 컴파일 타임과 런타임은 프로그램의 다른 단계에서 발생하는 중요한 개념입니다. 각각의 차이점과 특징을 살펴보겠습니다¹².

### 컴파일 타임 (Compile Time)
- **의미**: 컴파일 타임은 소스 코드를 기계어로 변환하는 과정입니다. 이 과정은 프로그램이 실행되기 전에 발생합니다.
- **주요 작업**: 구문 분석, 타입 검사, 최적화, 기계어 코드 생성 등이 포함됩니다.
- **예시**: 컴파일러가 소스 코드를 컴파일하여 실행 파일을 생성하는 과정.
  ```cpp
  int main() {
      int x = 10;
      return 0;
  }
  ```

### 런타임 (Runtime)
- **의미**: 런타임은 컴파일된 프로그램이 실제로 실행되는 시점을 의미합니다. 이 단계에서 프로그램은 사용자 입력을 처리하고, 메모리를 할당하며, 다양한 작업을 수행합니다.
- **주요 작업**: 메모리 할당, 함수 호출, 예외 처리 등이 포함됩니다.
- **예시**: 컴파일된 실행 파일을 실행하여 프로그램이 동작하는 과정.
  ```cpp
  int main() {
      int x = 10;
      std::cout << x << std::endl; // 프로그램 실행 중에 출력
      return 0;
  }
  ```

### 주요 차이점
1. **시점**: 컴파일 타임은 프로그램이 실행되기 전에 발생하고, 런타임은 프로그램이 실행되는 동안 발생합니다¹².
2. **작업 내용**: 컴파일 타임에는 코드 변환과 최적화가 이루어지며, 런타임에는 프로그램의 실제 동작이 이루어집니다.
3. **오류 처리**: 컴파일 타임 오류는 컴파일러가 소스 코드를 분석할 때 발견되며, 런타임 오류는 프로그램이 실행되는 동안 발생합니다.

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [조각모음](https://ryusm.tistory.com/147)
²: [벨로그](https://velog.io/@ymsection/%EB%9F%B0%ED%83%80%EC%9E%84Runtime%EA%B3%BC-%EC%BB%B4%ED%8C%8C%EC%9D%BC%ED%83%80%EC%9E%84Compiletime%EC%9D%98-%EC%B0%A8%EC%9D%B4)

원본: Copilot과의 대화, 2024. 7. 22.
(1) 스크립트언어와 컴파일언어 개념적 차이 및 장단점. https://bing.com/search?q=C%2b%2b+%eb%9f%b0%ed%83%80%ec%9e%84+%ec%bb%b4%ed%8c%8c%ec%9d%bc+%ec%b0%a8%ec%9d%b4.
(2) 스크립트언어와 컴파일언어 개념적 차이 및 장단점. https://lynn1602.tistory.com/entry/%EC%8A%A4%ED%81%AC%EB%A6%BD%ED%8A%B8%EC%96%B8%EC%96%B4%EC%99%80-%EC%BB%B4%ED%8C%8C%EC%9D%BC%EC%96%B8%EC%96%B4-%EA%B0%9C%EB%85%90%EC%A0%81-%EC%B0%A8%EC%9D%B4-%EB%B0%8F-%EC%9E%A5%EB%8B%A8%EC%A0%90.
(3) 컴파일타임(compiletime)과 런타임(runtime) - 조각모음. https://ryusm.tistory.com/147.
(4) 런타임(Runtime)과 컴파일타임(Compiletime)의 차이 - 벨로그. https://velog.io/@ymsection/%EB%9F%B0%ED%83%80%EC%9E%84Runtime%EA%B3%BC-%EC%BB%B4%ED%8C%8C%EC%9D%BC%ED%83%80%EC%9E%84Compiletime%EC%9D%98-%EC%B0%A8%EC%9D%B4.
(5) undefined. https://bing.com/search?q=.
*/
#pragma endregion

#pragma region C++ constexpr 사용 예시
/*
* C++에서 `constexpr` 키워드를 사용하면 컴파일 타임에 상수 값을 계산할 수 있습니다. 이를 통해 프로그램의 성능을 최적화할 수 있습니다. 다음은 `constexpr`를 사용하는 몇 가지 예제입니다¹².

### 예제 1: `constexpr` 변수
```cpp
#include <iostream>
constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5); // 컴파일 타임에 계산됨
    std::cout << "Square of 5 is: " << result << std::endl;
    return 0;
}
```
이 예제에서 `square` 함수는 `constexpr`로 정의되어 컴파일 타임에 호출될 수 있습니다. `result` 변수는 컴파일 타임에 계산된 값을 가집니다.

### 예제 2: `constexpr` 함수
```cpp
#include <iostream>
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

int main() {
    constexpr int result = factorial(5); // 컴파일 타임에 계산됨
    std::cout << "Factorial of 5 is: " << result << std::endl;
    return 0;
}
```
이 예제에서 `factorial` 함수는 재귀적으로 정의되어 있으며, 컴파일 타임에 계산될 수 있습니다. `result` 변수는 컴파일 타임에 계산된 팩토리얼 값을 가집니다.

### 예제 3: `constexpr` 객체
```cpp
#include <iostream>
class Point {
public:
    constexpr Point(int x, int y) : x_(x), y_(y) {}
    constexpr int getX() const { return x_; }
    constexpr int getY() const { return y_; }
private:
    int x_, y_;
};

int main() {
    constexpr Point p(3, 4); // 컴파일 타임에 객체 생성
    std::cout << "Point: (" << p.getX() << ", " << p.getY() << ")" << std::endl;
    return 0;
}
```
이 예제에서 `Point` 클래스는 `constexpr` 생성자와 멤버 함수를 가지고 있습니다. `p` 객체는 컴파일 타임에 생성되고 초기화됩니다.

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [모두의 코드](https://modoocode.com/293)
²: [GeeksforGeeks](https://www.geeksforgeeks.org/understanding-constexper-specifier-in-cpp/)

원본: Copilot과의 대화, 2024. 7. 22.
(1) 씹어먹는 C++ - <16 - 2. constexpr 와 함께라면 컴파일 타임 상수는 .... https://modoocode.com/293.
(2) Understanding constexpr Specifier in C++ - GeeksforGeeks. https://www.geeksforgeeks.org/understanding-constexper-specifier-in-cpp/.
(3) constexpr specifier (since C23) - cppreference.com. https://en.cppreference.com/w/c/language/constexpr.
(4) [C++] constexpr 상수 - 개발자 지망생. https://blockdmask.tistory.com/482.
(5) constexpr(C++) | Microsoft Learn. https://learn.microsoft.com/ko-kr/cpp/cpp/constexpr-cpp?view=msvc-170.
*/
#pragma endregion

#pragma region C# const vs readonly
/*
* `const`와 `readonly`는 C#에서 상수를 정의할 때 사용되지만, 몇 가지 중요한 차이점이 있습니다. 아래에서 두 키워드의 차이점을 설명드릴게요:

### `const`
- **컴파일 타임 상수**: `const`로 선언된 상수는 컴파일 시점에 값이 결정됩니다.
- **초기화**: 선언과 동시에 초기화해야 합니다.
- **변경 불가**: 초기화된 이후에는 값을 변경할 수 없습니다.
- **사용 범위**: 주로 기본 자료형(정수형, 실수형, 문자열 등)에 사용됩니다.
- **정적 멤버**: `const` 필드는 암묵적으로 `static`입니다. 따라서 클래스의 인스턴스가 없어도 접근할 수 있습니다.

```csharp
public class Example {
    public const int MyConst = 10;
}
```

### `readonly`
- **런타임 상수**: `readonly`로 선언된 필드는 런타임 시점에 값이 결정됩니다.
- **초기화**: 선언 시점 또는 생성자에서 초기화할 수 있습니다.
- **변경 불가**: 초기화된 이후에는 값을 변경할 수 없습니다.
- **사용 범위**: 모든 자료형에 사용할 수 있습니다.
- **인스턴스 멤버**: `readonly` 필드는 인스턴스 멤버로, 클래스의 인스턴스가 있어야 접근할 수 있습니다.

```csharp
public class Example {
    public readonly int MyReadonly;

    public Example(int value) {
        MyReadonly = value; // 생성자에서 초기화 가능
    }
}
```

### 주요 차이점 요약
- **초기화 시점**: `const`는 컴파일 타임에, `readonly`는 런타임에 초기화됩니다.
- **사용 가능 자료형**: `const`는 기본 자료형에만 사용되지만, `readonly`는 모든 자료형에 사용할 수 있습니다.
- **정적/인스턴스 멤버**: `const`는 암묵적으로 정적 멤버이고, `readonly`는 인스턴스 멤버입니다¹².

이해가 되셨나요? 더 궁금한 점이 있으면 언제든지 물어보세요! 😊

¹: [C# const와 readonly 차이점](https://blockdmask.tistory.com/600)
²: [C# const VS readonly](https://velog.io/@berylstar/const-VS-readonly)

원본: Copilot과의 대화, 2024. 7. 22.
(1) [C#] const, readonly 설명 사용법과 차이점에 대해서 - 개발자 지망생. https://blockdmask.tistory.com/600.
(2) [C#] const와 readonly 차이 - SEATED LISTENING IFHEAD MIX. https://bing.com/search?q=const+vs+readonly+%ec%b0%a8%ec%9d%b4%ec%a0%90.
(3) [C#] const VS readonly - 벨로그. https://velog.io/@berylstar/const-VS-readonly.
(4) Item 2, const 보다는 readonly가 더 좋다 - 최익필의 이름없는 블로그. https://www.ikpil.com/1162.
(5) C# - 상수(const)와 readonly. https://khadra.tistory.com/77.
*/
#pragma endregion

#pragma region C++에서 wchar_t의 w는 "wide"를 의미
/*
*/
#pragma endregion