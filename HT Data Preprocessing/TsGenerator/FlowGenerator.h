#pragma once
#include <string>
#include <unordered_map>
#include "AbstractGenerator.h"
#include "ConfigVal.h"
#include "RoadLength.h"

class FlowGenerator : public AbstractGenerator
{
private:
	RoadLength roadLength;
public:
	//inline static const std::string output = ConfigVal::bjFlowOutput;

	FlowGenerator(const std::string& csvFolder, const std::string& osmidFolder, const std::string& osmRoadData, const std::string &output);

	void updateFile(std::size_t threadNo, std::size_t newName) override {};

	DataSaveLoad::InnerType hit(std::size_t threadNo, unsigned lineIdx, DataLine::IdType osmid, DataLine::IdType taxiId, std::time_t ts, double lon, double lat, const DataSaveLoad::InnerType& oldValue) override;

	void noHit(std::size_t threadNo, unsigned lineIdx, DataLine::IdType osmid, DataLine::IdType taxiId, std::time_t ts, double lon, double lat, const DataSaveLoad::InnerType& oldValue) override {};

};
