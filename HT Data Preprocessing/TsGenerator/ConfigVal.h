#pragma once
#include <string>
class ConfigVal
{
public:
	// Need pretreatment to get the files below
	std::string csv_folder = R"(./taxi_log_2008_by_id_2)";
	std::string osmid_folder = R"(./output_osmid)";
	std::string osmDataPath = R"(./result.txt)";

	inline static const unsigned clusterTime = 60 * 15;
	std::string bigFlowOutput = "./output/bj/flow/data";
	std::string bigPtOutput = "./output/bj/passtime/data";
	std::string bigAccOutput = "./output/bj/acc/data";

	inline static const double filterSpeed = 30;


	std::string trjClsOutDir = "./output/small1/trjCls/";

	std::string filterClsOutDir = "./output/small1/filter/";

	std::string smallFlowOutput = "./output/small1/flow/data";
	std::string smallPtOutput = "./output/small1/passtime/data";
	std::string smallAccOutput = "./output/small1/acc/data";

	std::string smallPlainFlowOutput = "./output/small1/flow/data.txt";
	std::string smallPlainPtOutput = "./output/small1/passtime/data.txt";
	std::string smallPlainAccOutput = "./output/small1/acc/data.txt";

	std::string smallFlowOutput2 = "./output/small1/flow/data";
	std::string smallPtOutput2 = "./output/small1/passtime/data";
	std::string smallAccOutput2 = "./output/small1/acc/data";

	std::string smallPlainFlowOutput2 = "./output/small1/flow/data.txt";
	std::string smallPlainPtOutput2 = "./output/small1/passtime/data.txt";
	std::string smallPlainAccOutput2 = "./output/small1/acc/data.txt";

	std::string smallEdgePath = "";
	std::string smallNodePath = "";

	std::string smallIdPath = "";

	std::size_t limit = 150;

	ConfigVal() = default;

	static ConfigVal getConfigSmall1() {
		ConfigVal config;

		config.trjClsOutDir = "./output/small1/trjCls/";

		config.filterClsOutDir = "./output/small1/filter/";

		config.smallFlowOutput = "./output/small1/flow/data";
		config.smallPtOutput = "./output/small1/passtime/data";
		config.smallAccOutput = "./output/small1/acc/data";

		config.smallPlainFlowOutput = "./output/small1/flow/data.txt";
		config.smallPlainPtOutput = "./output/small1/passtime/data.txt";
		config.smallPlainAccOutput = "./output/small1/acc/data.txt";

		config.smallEdgePath = R"(./small1/edge.txt)";
		config.smallNodePath = R"(./small1/node.txt)";

		config.smallIdPath = R"(./small1.txt)";

		config.limit = 150;

		config.smallFlowOutput2 = "./output/small1/flow/data";
		config.smallPtOutput2 = "./output/small1/passtime/data";
		config.smallAccOutput2 = "./output/small1/acc/data";

		config.smallPlainFlowOutput2 = "./output/small1/flow/data2.txt";
		config.smallPlainPtOutput2 = "./output/small1/passtime/data2.txt";
		config.smallPlainAccOutput2 = "./output/small1/acc/data2.txt";

		return config;
	}
};

