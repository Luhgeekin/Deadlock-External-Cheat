#include<iostream>
#include<functional>

template<typename T>
class Lazy {
public:
	Lazy() : _initFunc([] { return T(); }) {}
	Lazy(std::function<T()> initFunc) : _initFunc(initFunc) {}

	T* operator -> () {
		return &GetValue();
	}

	T& operator * () {
		return GetValue();
	}

private:
	T& GetValue() {
		if (!_value) {
			_value = std::make_unique<T>(_initFunc());
		}
		return *_value;
	}

private:
	std::function<T()> _initFunc;
	std::unique_ptr<T> _value = nullptr;
};