import { useState } from 'react';

// Custom Hook for handling form input and validation
const useFormValidation = (initialState, validate) => {
  const [values, setValues] = useState(initialState);
  const [errors, setErrors] = useState({});

  // Handle input changes
  const handleChange = (e) => {
    const { name, value } = e.target;
    setValues({ ...values, [name]: value });
  };

  // Handle form submission
  const handleSubmit = (e) => {
    e.preventDefault();
    const validationErrors = validate(values);
    setErrors(validationErrors);

    if (Object.keys(validationErrors).length === 0) {
      console.log('Form submitted successfully:', values);
    } else {
      console.error('Validation errors:', validationErrors);
    }
  };

  return {
    values,
    errors,
    handleChange,
    handleSubmit,
  };
};

export default useFormValidation;
