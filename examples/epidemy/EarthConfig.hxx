#ifndef __EarthConfig_hxx__
#define __EarthConfig_hxx__

#include <Config.hxx>
#include <Point2D.hxx>
#include <Size.hxx>

namespace Examples
{

class EarthConfig : public Engine::Config
{
	Engine::Size<int> _size;
    std::string _demName;
	std::string _populationName;

	// number of real individuals to 1 in simulation
	int _scale;    
	Engine::Point2D<int> _firstCase;
	int _numCases;

    float _virulence;
public:
	EarthConfig();
	virtual ~EarthConfig();

	void extractParticularAttribs(TiXmlElement *pRoot);

	const Engine::Size<int> & getSize() const;

	friend class Earth;
};

} // namespace Examples

#endif // __EarthConfig_hxx__

