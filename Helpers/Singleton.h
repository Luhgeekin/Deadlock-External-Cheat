#pragma once

#define DECLARE_SINGLETON(ClassName)        \
private:                                    \
    friend class Singleton<ClassName>;      \
    ClassName() = default;                  \
    ClassName(const ClassName&) = delete;   \
    ClassName& operator=(const ClassName&) = delete;



template <typename T>
class Singleton
{
protected:
	Singleton() {};
	
	~Singleton() {};

public:
	static T& get() {
		
		static T inst{};

		return inst;
	}
};