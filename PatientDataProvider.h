#pragma once
#include "ISearchFilter.h"
#include "PatientDataList.h"
class PatientDataProvider
{
public:
	PatientDataProvider(void);
	PatientDataList getPatientDetails(ISearchFilter iSearchFilter);
public:
	~PatientDataProvider(void);
};
