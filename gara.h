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

	};
}