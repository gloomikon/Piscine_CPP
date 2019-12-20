/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PredictionsMonitore.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 20:35:26 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREDICTIONSMONITORE
#define PREDICTIONSMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>

class PredictionsMonitore : public IMonitorModule {
	public:
	PredictionsMonitore();
	virtual ~PredictionsMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	PredictionsMonitore(PredictionsMonitore const &src);
	void operator=(PredictionsMonitore const &rhs);
};

#endif