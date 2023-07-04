#pragma once

template<class T>
class SmartPointer
{
	public:
		explicit SmartPointer();
		explicit SmartPointer(T *new_p);
		~SmartPointer();

		void Clear();

		void set_p(T *new_p);
		T* get_p() const;

	private:
		T *p_;
};

