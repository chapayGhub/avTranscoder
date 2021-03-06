#ifndef _AV_TRANSCODER_CODED_STREAM_AV_OUTPUT_STREAM_HPP_
#define _AV_TRANSCODER_CODED_STREAM_AV_OUTPUT_STREAM_HPP_

#include "IOutputStream.hpp"

namespace avtranscoder
{

class OutputFile;

class AvExport AvOutputStream : public IOutputStream
{
public:
	AvOutputStream( OutputFile& outputFile, const size_t streamIndex );

	~AvOutputStream( );

	size_t getStreamIndex() const { return _streamIndex; }

	bool wrap( CodedData& data );

private:
	OutputFile*      _outputFile;

	size_t           _streamIndex;
};

}

#endif
