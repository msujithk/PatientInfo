#include "Client.h"
#include "PatientDataModel.h"
#include "PatientDataList.h"
#include "CompositeSearchFilter.h"
Client::Client(void)
{
	m_patientDataProvider = PatientDataProvider()
	PatientDataList patientListByMRN = m_patientDataProvider.getPatientDetails(new SearchByMRN(123));
	PatientDataList patientListByName = m_patientDataProvider.getPatientDetails(new SearchByName("abc"));
	CompositeSearchFilter *pCompositeSearchFilter = new CompositeSearchFilter();
	pCompositeSearchFilter->AddFilter( new SearchByMRN(123));
	pCompositeSearchFilter->AddFilter( new SearchByMRN("afaf"));
	PatientDataList patientListByMRNnNAME = m_patientDataProvider.getPatientDetails(pCompositeSearchFilter);
}

Client::~Client(void)
{

}
