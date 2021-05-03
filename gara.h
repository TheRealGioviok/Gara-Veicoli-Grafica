//CLASSE GARA

#ifndef STDEXCEPT
#include <stdexcept>
#endif

namespace gv {
	class Gara {
		double len;

		Array<Veicolo> arr;

		void setLen(double len) {
			if (len > 0)this->len = len;
			else throw invalid_argument("Invalid len argument in gv::Gara::setLen(double) : " + std::string(len));
		}

		double getLen() {
			return len;
		}

		Veicolo operator[](int index) {
			if (index<0) throw invalid_argument("Invalid index argument in gv::Gara[] : " + std::string(index));
			if (index >= arr.size()) throw invalid_argument("Invalid index argument in gv::Gara[] (list index out of range) : " + std::string(index));
			return arr[index];
		}

		void sort() { //Just a simple bubble sort, nothing too difficult
			bool sorted;
			int opt = 0; //Optimization lel
			do {
				sorted = true;
				for (int i = 0; i < arr.size()-1-(opt++); i++) {
					if (arr[i] > arr[i + 1]) {
						sorted = false;
						arr.swap(i, i + 1);
					}
				}
			} while (!sorted);
		}

		bool step() {
			for (int i = 0; i < arr.size(); i++) {
				arr[i].step();
			}
		}
	};
}

