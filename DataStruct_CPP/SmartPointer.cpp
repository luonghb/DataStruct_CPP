#include "SmartPointer.h"

template<class T>
inline SmartPointer<T>::SmartPointer()
{
	p_ = nullptr;
}

template<class T>
inline SmartPointer<T>::SmartPointer(T* new_p)
{
	p_ = new_p;
}

template<class T>
inline SmartPointer<T>::~SmartPointer()
{
	Clear();
}

template<class T>
inline void SmartPointer<T>::Clear()
{
	if (p_ != nullptr) {
		delete p_;
		p_ = nullptr;
	}
}

template<class T>
inline void SmartPointer<T>::set_p(T* new_p)
{
	p_ = new_p;
}

template<class T>
inline T* SmartPointer<T>::get_p() const
{
	return p_;
}

template<class T>
T& SmartPointer<T>::operator*()
{
	return *p_;
}

template<class T>
T* SmartPointer<T>::operator->()
{
	return p_;
}

template class SmartPointer<int>;
