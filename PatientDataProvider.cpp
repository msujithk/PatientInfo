#include "PatientDataProvider.h"

PatientDataProvider::PatientDataProvider(void)
{
}

PatientDataProvider::~PatientDataProvider(void)
{
}

PatientDataList PatientDataProvider::getPatientDetails(ISearchFilter iSearchFilter)
{
   iSearchFilter.filter(m_patientDataList);
}
